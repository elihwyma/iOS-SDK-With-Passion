/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface CBCAManager : NSObject

{
    NSObject<OS_os_log> *_logHandle;
    NSMutableArray *_displays;
    float _currentlySetMatrix[9];
    float _currentlySetScaler;
    float _digitalDimmingBrightnessScaler;
}

- (void)dealloc;
- (id)initWithCADisplay:(id)arg1;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (void)colorRampPropertyHandler:(id)arg1;
- (void)displayBrightnessPropertyHandler:(id)arg1;
- (void)nitsThresholdPLCPropertyHandler:(id)arg1;
- (void)updateDigitalDimmingBrightnessScaler:(id)arg1;
- (id)initWithCADisplays:(id)arg1;

@end
