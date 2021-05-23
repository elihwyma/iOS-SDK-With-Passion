/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class CBDisplayModule;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

__attribute__((visibility("hidden")))
@interface CBABRamp : NSObject

{
    CBDisplayModule *_displayModule;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fadeTimer;
    NSObject<OS_os_log> *_logHandle;
    float _maxLinearBrightness;
    float _minLinearBrightness;
}

- (void)dealloc;
- (void)stopTransition;
- (float)getVersion;
- (id)initWithDisplayModule:(id)arg1 andQueue:(id)arg2;
- (void)transitionToBrightness:(float)arg1 force:(_Bool)arg2 periodOverride:(_Bool)arg3 period:(float)arg4;
- (void)setPerceptualBrightnessWithFade:(float)arg1 length:(float)arg2 current:(float)arg3;

@end
