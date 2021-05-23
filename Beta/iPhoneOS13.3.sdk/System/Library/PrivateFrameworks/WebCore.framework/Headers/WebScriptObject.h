/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class WebScriptObjectPrivate;

@interface WebScriptObject : NSObject

{
    WebScriptObjectPrivate *_private;
}

+ (void)initialize;
+ (id)_convertValueToObjcValue:(struct JSValue)arg1 originRootObject:(struct RootObject *)arg2 rootObject:(struct RootObject *)arg3;
+ (id)scriptObjectForJSObject:(struct OpaqueJSValue *)arg1 originRootObject:(struct RootObject *)arg2 rootObject:(struct RootObject *)arg3;
+ (_Bool)throwException:(id)arg1;

- (void)dealloc;
- (oneway void)release;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (struct RootObject *)_rootObject;
- (id)stringRepresentation;
- (struct JSObject *)_imp;
- (void)setException:(id)arg1;
- (void)_setOriginRootObject:(RefPtr_11363527 *)arg1 andRootObject:(RefPtr_11363527 *)arg2;
- (id)_initWithJSObject:(struct JSObject *)arg1 originRootObject:(RefPtr_11363527 *)arg2 rootObject:(RefPtr_11363527 *)arg3;
- (_Bool)_hasImp;
- (void)_setImp:(struct JSObject *)arg1 originRootObject:(RefPtr_11363527 *)arg2 rootObject:(RefPtr_11363527 *)arg3;
- (_Bool)_isSafeScript;
- (struct RootObject *)_originRootObject;
- (struct OpaqueJSValue *)JSObject;
- (struct OpaqueJSContext *)_globalContextRef;
- (id)callWebScriptMethod:(id)arg1 withArguments:(id)arg2;
- (id)evaluateWebScript:(id)arg1;
- (void)removeWebScriptKey:(id)arg1;
- (_Bool)hasWebScriptKey:(id)arg1;
- (id)webScriptValueAtIndex:(unsigned int)arg1;
- (void)setWebScriptValueAtIndex:(unsigned int)arg1 value:(id)arg2;
- (id)JSValue;

@end
