/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBModule.h>

@class CADisplay, CBColorModuleiOS, CBDisplayModuleHID, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CBEDRModule : CBModule

{
    float _currentLux;
    float _currentNits;
    float _maxNits;
    float _Ycomp;
    float _prevLux;
    float _prevNits;
    float _prevMaxNits;
    float _prevYcomp;
    CADisplay *_cadisplay;
    CBDisplayModuleHID *_displayModule;
    CBColorModuleiOS *_colorModule;
    NSMutableArray *_filters;
    NSMutableArray *_alsNodes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stop;
- (void)start;
- (id)copyPropertyForKey:(id)arg1;
- (void)handleALSEvent:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (void)handleHIDEventInternal:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (_Bool)addHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (void)handleBrightnessUpdate:(id)arg1;
- (void)updateEDRState;
- (void)handleTargetWhitepointUpdate:(id)arg1;
- (id)initWithQueue:(id)arg1 display:(id)arg2 colorModule:(id)arg3 andDisplayModule:(id)arg4;

@end
