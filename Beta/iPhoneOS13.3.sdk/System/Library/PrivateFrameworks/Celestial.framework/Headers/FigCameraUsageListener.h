/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface FigCameraUsageListener : NSObject

{
    _Bool _isProhibited;
    struct OpaqueFigSimpleMutex *_isProhibitedLock;
    CDUnknownBlockType _changeHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)initWithChangeHandler:(CDUnknownBlockType)arg1;

@end
