/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

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

#include "Document.h"
#include "Frame.h"
#include "SVGDocumentExtensions.h"
#include "SVGElement.h"
#include "SVGAnimatedTemplate.h"
#include "JSSVGGElement.h"

#include <wtf/GetPtr.h>

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGGElement.h"
#include "SVGStringList.h"

#include <kjs/Error.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGGElement)

/* Hash table */

static const HashTableValue JSSVGGElementTableValues[12] =
{
    { "requiredFeatures", (intptr_t)JSSVGGElement::RequiredFeaturesAttrNum, DontDelete|ReadOnly, 0 },
    { "requiredExtensions", (intptr_t)JSSVGGElement::RequiredExtensionsAttrNum, DontDelete|ReadOnly, 0 },
    { "systemLanguage", (intptr_t)JSSVGGElement::SystemLanguageAttrNum, DontDelete|ReadOnly, 0 },
    { "xmllang", (intptr_t)JSSVGGElement::XmllangAttrNum, DontDelete, 0 },
    { "xmlspace", (intptr_t)JSSVGGElement::XmlspaceAttrNum, DontDelete, 0 },
    { "externalResourcesRequired", (intptr_t)JSSVGGElement::ExternalResourcesRequiredAttrNum, DontDelete|ReadOnly, 0 },
    { "className", (intptr_t)JSSVGGElement::ClassNameAttrNum, DontDelete|ReadOnly, 0 },
    { "style", (intptr_t)JSSVGGElement::StyleAttrNum, DontDelete|ReadOnly, 0 },
    { "transform", (intptr_t)JSSVGGElement::TransformAttrNum, DontDelete|ReadOnly, 0 },
    { "nearestViewportElement", (intptr_t)JSSVGGElement::NearestViewportElementAttrNum, DontDelete|ReadOnly, 0 },
    { "farthestViewportElement", (intptr_t)JSSVGGElement::FarthestViewportElementAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGGElementTable = { 127, JSSVGGElementTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSSVGGElementPrototypeTableValues[7] =
{
    { "hasExtension", (intptr_t)jsSVGGElementPrototypeFunctionHasExtension, DontDelete|Function, 1 },
    { "getPresentationAttribute", (intptr_t)jsSVGGElementPrototypeFunctionGetPresentationAttribute, DontDelete|Function, 1 },
    { "getBBox", (intptr_t)jsSVGGElementPrototypeFunctionGetBBox, DontDelete|Function, 0 },
    { "getCTM", (intptr_t)jsSVGGElementPrototypeFunctionGetCTM, DontDelete|Function, 0 },
    { "getScreenCTM", (intptr_t)jsSVGGElementPrototypeFunctionGetScreenCTM, DontDelete|Function, 0 },
    { "getTransformToElement", (intptr_t)jsSVGGElementPrototypeFunctionGetTransformToElement, DontDelete|Function, 1 },
    { 0, 0, 0, 0 }
};

static const HashTable JSSVGGElementPrototypeTable = { 2047, JSSVGGElementPrototypeTableValues, 0 };

const ClassInfo JSSVGGElementPrototype::s_info = { "SVGGElementPrototype", 0, &JSSVGGElementPrototypeTable, 0 };

JSObject* JSSVGGElementPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSSVGGElement.prototype]]");
    return JSC::cacheGlobalObject<JSSVGGElementPrototype>(exec, *prototypeIdentifier);
}

bool JSSVGGElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGGElementPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSSVGGElement::s_info = { "SVGGElement", &JSSVGElement::s_info, &JSSVGGElementTable , 0 };

JSSVGGElement::JSSVGGElement(JSObject* prototype, SVGGElement* impl)
    : JSSVGElement(prototype, impl)
{
}

bool JSSVGGElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGGElement, Base>(exec, &JSSVGGElementTable, this, propertyName, slot);
}

JSValue* JSSVGGElement::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case RequiredFeaturesAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredFeatures()), imp);
    }
    case RequiredExtensionsAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->requiredExtensions()), imp);
    }
    case SystemLanguageAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->systemLanguage()), imp);
    }
    case XmllangAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        return jsString(exec, imp->xmllang());
    }
    case XmlspaceAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        return jsString(exec, imp->xmlspace());
    }
    case ExternalResourcesRequiredAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case ClassNameAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case StyleAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->style()));
    }
    case TransformAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
        return toJS(exec, obj.get(), imp);
    }
    case NearestViewportElementAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->nearestViewportElement()));
    }
    case FarthestViewportElementAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        return toJS(exec, WTF::getPtr(imp->farthestViewportElement()));
    }
    }
    return 0;
}

void JSSVGGElement::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSSVGGElement, Base>(exec, propertyName, value, &JSSVGGElementTable, this, slot);
}

void JSSVGGElement::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case XmllangAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        imp->setXmllang(value->toString(exec));
        break;
    }
    case XmlspaceAttrNum: {
        SVGGElement* imp = static_cast<SVGGElement*>(impl());
        imp->setXmlspace(value->toString(exec));
        break;
    }
    }
}

JSValue* jsSVGGElementPrototypeFunctionHasExtension(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGGElement::s_info))
        return throwError(exec, TypeError);
    JSSVGGElement* castedThisObj = static_cast<JSSVGGElement*>(thisValue);
    SVGGElement* imp = static_cast<SVGGElement*>(castedThisObj->impl());
    const UString& extension = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = jsBoolean(imp->hasExtension(extension));
    return result;
}

JSValue* jsSVGGElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGGElement::s_info))
        return throwError(exec, TypeError);
    JSSVGGElement* castedThisObj = static_cast<JSSVGGElement*>(thisValue);
    SVGGElement* imp = static_cast<SVGGElement*>(castedThisObj->impl());
    const UString& name = args.at(exec, 0)->toString(exec);


    JSC::JSValue* result = toJS(exec, WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}

JSValue* jsSVGGElementPrototypeFunctionGetBBox(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGGElement::s_info))
        return throwError(exec, TypeError);
    JSSVGGElement* castedThisObj = static_cast<JSSVGGElement*>(thisValue);
    SVGGElement* imp = static_cast<SVGGElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<FloatRect>::create(imp->getBBox()).get(), imp);
    return result;
}

JSValue* jsSVGGElementPrototypeFunctionGetCTM(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGGElement::s_info))
        return throwError(exec, TypeError);
    JSSVGGElement* castedThisObj = static_cast<JSSVGGElement*>(thisValue);
    SVGGElement* imp = static_cast<SVGGElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getCTM()).get(), imp);
    return result;
}

JSValue* jsSVGGElementPrototypeFunctionGetScreenCTM(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGGElement::s_info))
        return throwError(exec, TypeError);
    JSSVGGElement* castedThisObj = static_cast<JSSVGGElement*>(thisValue);
    SVGGElement* imp = static_cast<SVGGElement*>(castedThisObj->impl());


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getScreenCTM()).get(), imp);
    return result;
}

JSValue* jsSVGGElementPrototypeFunctionGetTransformToElement(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSSVGGElement::s_info))
        return throwError(exec, TypeError);
    JSSVGGElement* castedThisObj = static_cast<JSSVGGElement*>(thisValue);
    SVGGElement* imp = static_cast<SVGGElement*>(castedThisObj->impl());
    ExceptionCode ec = 0;
    SVGElement* element = toSVGElement(args.at(exec, 0));


    JSC::JSValue* result = toJS(exec, JSSVGStaticPODTypeWrapper<AffineTransform>::create(imp->getTransformToElement(element, ec)).get(), imp);
    setDOMException(exec, ec);
    return result;
}


}

#endif // ENABLE(SVG)
