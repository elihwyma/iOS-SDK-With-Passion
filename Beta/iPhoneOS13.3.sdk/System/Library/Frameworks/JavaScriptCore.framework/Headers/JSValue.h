/*
 Image: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
 */

#import <Foundation/NSObject.h>

@class JSContext;

@interface JSValue : NSObject

{
    struct OpaqueJSValue *m_value;
    JSContext *_context;
}

@property (readonly) JSContext *context;
@property (readonly) _Bool isUndefined;
@property (readonly) _Bool isNull;
@property (readonly) _Bool isBoolean;
@property (readonly) _Bool isNumber;
@property (readonly) _Bool isString;
@property (readonly) _Bool isObject;
@property (readonly) _Bool isArray;
@property (readonly) _Bool isDate;
@property (readonly) _Bool isSymbol;

+ (id)valueWithJSValueRef:(struct OpaqueJSValue *)arg1 inContext:(id)arg2;
+ (id)valueWithNewObjectInContext:(id)arg1;
+ (id)valueWithObject:(id)arg1 inContext:(id)arg2;
+ (id)valueWithUndefinedInContext:(id)arg1;
+ (id)valueWithNewArrayInContext:(id)arg1;
+ (id)valueWithNewErrorFromMessage:(id)arg1 inContext:(id)arg2;
+ (id)valueWithNewPromiseRejectedWithReason:(id)arg1 inContext:(id)arg2;
+ (id)valueWithNewPromiseInContext:(id)arg1 fromExecutor:(CDUnknownBlockType)arg2;
+ (id)valueWithDouble:(double)arg1 inContext:(id)arg2;
+ (id)valueWithBool:(_Bool)arg1 inContext:(id)arg2;
+ (id)valueWithInt32:(int)arg1 inContext:(id)arg2;
+ (id)valueWithUInt32:(unsigned int)arg1 inContext:(id)arg2;
+ (id)valueWithNewRegularExpressionFromPattern:(id)arg1 flags:(id)arg2 inContext:(id)arg3;
+ (id)valueWithNullInContext:(id)arg1;
+ (id)valueWithNewSymbolFromDescription:(id)arg1 inContext:(id)arg2;
+ (id)valueWithNewPromiseResolvedWithResult:(id)arg1 inContext:(id)arg2;
+ (id)valueWithPoint:(struct CGPoint)arg1 inContext:(id)arg2;
+ (id)valueWithRange:(struct _NSRange)arg1 inContext:(id)arg2;
+ (id)valueWithRect:(struct CGRect)arg1 inContext:(id)arg2;
+ (id)valueWithSize:(struct CGSize)arg1 inContext:(id)arg2;
+ (SEL)selectorForStructToValue:(const char *)arg1;
+ (SEL)selectorForValueToStruct:(const char *)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)valueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)toObject;
- (struct OpaqueJSValue *)JSValueRef;
- (id)toArray;
- (id)toString;
- (id)toDictionary;
- (int)toInt32;
- (id)callWithArguments:(id)arg1;
- (double)toDouble;
- (id)invokeMethod:(id)arg1 withArguments:(id)arg2;
- (id)toObjectOfClass:(Class)arg1;
- (_Bool)toBool;
- (unsigned int)toUInt32;
- (id)toNumber;
- (id)toDate;
- (_Bool)deleteProperty:(id)arg1;
- (_Bool)hasProperty:(id)arg1;
- (void)defineProperty:(id)arg1 descriptor:(id)arg2;
- (_Bool)isEqualToObject:(id)arg1;
- (_Bool)isEqualWithTypeCoercionToObject:(id)arg1;
- (_Bool)isInstanceOf:(id)arg1;
- (id)constructWithArguments:(id)arg1;
- (struct CGPoint)toPoint;
- (struct CGSize)toSize;
- (struct _NSRange)toRange;
- (struct CGRect)toRect;
- (id)initWithValue:(struct OpaqueJSValue *)arg1 inContext:(id)arg2;

@end
