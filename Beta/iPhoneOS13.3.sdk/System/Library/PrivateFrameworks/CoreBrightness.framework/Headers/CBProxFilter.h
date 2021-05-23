/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBFilter.h>

__attribute__((visibility("hidden")))
@interface CBProxFilter : CBFilter

{
    float _proxReleaseTime;
    _Bool _proxHasJustBeenRemoved;
    float _proxTriggerDelay;
    _Bool _triggered;
}

@property (nonatomic, getter=isTriggered) _Bool triggered;

- (id)init;
- (void)dealloc;
- (id)handleALSEvent:(id)arg1;
- (id)handleProximityEvent:(id)arg1;
- (id)filterEvent:(id)arg1;

@end
