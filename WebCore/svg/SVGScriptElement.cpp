/*
    Copyright (C) 2004, 2005, 2008 Nikolas Zimmermann <zimmermann@kde.org>
                  2004, 2005, 2007 Rob Buis <buis@kde.org>

    This file is part of the KDE project

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)
#include "SVGScriptElement.h"
#include "SVGNames.h"

namespace WebCore {

SVGScriptElement::SVGScriptElement(const QualifiedName& tagName, Document* doc)
    : SVGElement(tagName, doc)
    , SVGURIReference()
    , SVGExternalResourcesRequired()
    , m_data(this, this)
{
}

SVGScriptElement::~SVGScriptElement()
{
}

String SVGScriptElement::type() const
{
    return m_type;
}

void SVGScriptElement::setType(const String& type)
{
    m_type = type;
}

String SVGScriptElement::scriptContent() const
{
    return m_data.scriptContent();
}

void SVGScriptElement::parseMappedAttribute(MappedAttribute* attr)
{
    if (attr->name() == SVGNames::typeAttr)
        setType(attr->value());
    else {
        if (SVGURIReference::parseMappedAttribute(attr))
            return;
        if (SVGExternalResourcesRequired::parseMappedAttribute(attr))
            return;

        SVGElement::parseMappedAttribute(attr);
    }
}

void SVGScriptElement::getSubresourceAttributeStrings(Vector<String>& urls) const
{
    urls.append(href());
}

String SVGScriptElement::sourceAttributeValue() const
{
    return href();
}

String SVGScriptElement::charsetAttributeValue() const
{
    return String();
}

String SVGScriptElement::typeAttributeValue() const
{
    return type();
}

String SVGScriptElement::languageAttributeValue() const
{
    return String();
}

void SVGScriptElement::dispatchLoadEvent()
{
    // TODO!
    // dispatchSVGEvent(loadEvent, false, false);
}

void SVGScriptElement::dispatchErrorEvent()
{
    // TODO!
    // dispatchSVGEvent(errorEvent, true, false);
}
}

#endif // ENABLE(SVG)
