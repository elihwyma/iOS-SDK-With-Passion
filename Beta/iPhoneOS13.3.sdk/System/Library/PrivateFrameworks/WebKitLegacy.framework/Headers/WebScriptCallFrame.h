/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class WebScriptCallFramePrivate;

@interface WebScriptCallFrame : NSObject

{
    WebScriptCallFramePrivate *_private;
    id _userInfo;
}

- (void)dealloc;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)functionName;
- (id)exception;
- (id)_initWithGlobalObject:(id)arg1 functionName:(struct String)arg2 exceptionValue:(struct JSValue)arg3;
- (id)_convertValueToObjcValue:(struct JSValue)arg1;

@end
