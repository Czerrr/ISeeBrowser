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

#include "JSCSSValue.h"

#include <wtf/GetPtr.h>

#include "CSSValue.h"
#include "KURL.h"

#include <kjs/JSNumberCell.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSCSSValue)

/* Hash table */

static const HashTableValue JSCSSValueTableValues[4] =
{
    { "cssText", (intptr_t)JSCSSValue::CssTextAttrNum, DontDelete, 0 },
    { "cssValueType", (intptr_t)JSCSSValue::CssValueTypeAttrNum, DontDelete|ReadOnly, 0 },
    { "constructor", (intptr_t)JSCSSValue::ConstructorAttrNum, DontEnum, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSValueTable = { 7, JSCSSValueTableValues, 0 };

/* Hash table for constructor */

static const HashTableValue JSCSSValueConstructorTableValues[5] =
{
    { "CSS_INHERIT", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "CSS_PRIMITIVE_VALUE", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "CSS_VALUE_LIST", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "CSS_CUSTOM", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSValueConstructorTable = { 7, JSCSSValueConstructorTableValues, 0 };

class JSCSSValueConstructor : public DOMObject {
public:
    JSCSSValueConstructor(ExecState* exec)
        : DOMObject(exec->lexicalGlobalObject()->objectPrototype())
    {
        putDirect(exec->propertyNames().prototype, JSCSSValuePrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSCSSValueConstructor::s_info = { "CSSValueConstructor", 0, &JSCSSValueConstructorTable, 0 };

bool JSCSSValueConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSValueConstructor, DOMObject>(exec, &JSCSSValueConstructorTable, this, propertyName, slot);
}

JSValue* JSCSSValueConstructor::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

/* Hash table for prototype */

static const HashTableValue JSCSSValuePrototypeTableValues[5] =
{
    { "CSS_INHERIT", (intptr_t)0, DontDelete|ReadOnly, 0 },
    { "CSS_PRIMITIVE_VALUE", (intptr_t)1, DontDelete|ReadOnly, 0 },
    { "CSS_VALUE_LIST", (intptr_t)2, DontDelete|ReadOnly, 0 },
    { "CSS_CUSTOM", (intptr_t)3, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSCSSValuePrototypeTable = { 7, JSCSSValuePrototypeTableValues, 0 };

const ClassInfo JSCSSValuePrototype::s_info = { "CSSValuePrototype", 0, &JSCSSValuePrototypeTable, 0 };

JSObject* JSCSSValuePrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSCSSValue.prototype]]");
    return JSC::cacheGlobalObject<JSCSSValuePrototype>(exec, *prototypeIdentifier);
}

bool JSCSSValuePrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSValuePrototype, JSObject>(exec, &JSCSSValuePrototypeTable, this, propertyName, slot);
}

JSValue* JSCSSValuePrototype::getValueProperty(ExecState* exec, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(exec, token);
}

const ClassInfo JSCSSValue::s_info = { "CSSValue", 0, &JSCSSValueTable , 0 };

JSCSSValue::JSCSSValue(JSObject* prototype, CSSValue* impl)
    : DOMObject(prototype)
    , m_impl(impl)
{
}

JSCSSValue::~JSCSSValue()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());

}

bool JSCSSValue::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSCSSValue, Base>(exec, &JSCSSValueTable, this, propertyName, slot);
}

JSValue* JSCSSValue::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case CssTextAttrNum: {
        CSSValue* imp = static_cast<CSSValue*>(impl());
        return jsStringOrNull(exec, imp->cssText());
    }
    case CssValueTypeAttrNum: {
        CSSValue* imp = static_cast<CSSValue*>(impl());
        return jsNumber(exec, imp->cssValueType());
    }
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

void JSCSSValue::put(ExecState* exec, const Identifier& propertyName, JSValue* value, PutPropertySlot& slot)
{
    lookupPut<JSCSSValue, Base>(exec, propertyName, value, &JSCSSValueTable, this, slot);
}

void JSCSSValue::putValueProperty(ExecState* exec, int token, JSValue* value)
{
    switch (token) {
    case CssTextAttrNum: {
        CSSValue* imp = static_cast<CSSValue*>(impl());
        ExceptionCode ec = 0;
        imp->setCssText(valueToStringWithNullCheck(exec, value), ec);
        setDOMException(exec, ec);
        break;
    }
    }
}

JSValue* JSCSSValue::getConstructor(ExecState* exec)
{
    static const Identifier* constructorIdentifier = new Identifier(exec, "[[CSSValue.constructor]]");
    return JSC::cacheGlobalObject<JSCSSValueConstructor>(exec, *constructorIdentifier);
}

CSSValue* toCSSValue(JSC::JSValue* val)
{
    return val->isObject(&JSCSSValue::s_info) ? static_cast<JSCSSValue*>(val)->impl() : 0;
}

}