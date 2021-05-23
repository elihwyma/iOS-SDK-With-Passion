/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class BrightnessSystemClientInternal;

@protocol OS_os_log;

@interface BrightnessSystemClient : NSObject

{
    BrightnessSystemClientInternal *bsci;
    NSObject<OS_os_log> *_logHandle;
    CDUnknownBlockType _displayNotificationBlock;
    CDUnknownBlockType _keyboardNotificationBlock;
    CDUnknownBlockType _propertyNotificationBlock;
}

- (id)init;
- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1 forProperties:(id)arg2;
- (_Bool)isAlsSupported;
- (void)unregisterDisplayNotificationBlock;
- (void)unregisterKeyboardNotificationBlock;
- (void)unregisterPropertyNotificationBlock;
- (_Bool)setProperty:(id)arg1 withKey:(id)arg2 andDisplay:(unsigned long long)arg3;
- (id)copyPropertyForKey:(id)arg1 andDisplay:(unsigned long long)arg2;
- (void)registerDisplayNotificationCallbackBlock:(CDUnknownBlockType)arg1;
- (void)registerNotificationForKey:(id)arg1;
- (void)unregisterNotificationForKey:(id)arg1;
- (void)registerNotificationForKeys:(id)arg1;
- (void)unregisterNotificationForKeys:(id)arg1;
- (void)registerNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2;
- (void)unregisterNotificationForKeys:(id)arg1 andDisplay:(unsigned long long)arg2;
- (void)registerNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2;
- (void)unregisterNotificationForKey:(id)arg1 andDisplay:(unsigned long long)arg2;
- (_Bool)setProperty:(id)arg1 withKey:(id)arg2 keyboardID:(unsigned long long)arg3;
- (id)copyPropertyForKey:(id)arg1 keyboardID:(unsigned long long)arg2;
- (void)registerKeyboardNotificationCallbackBlock:(CDUnknownBlockType)arg1;
- (void)registerNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2;
- (void)unregisterNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2;

@end
