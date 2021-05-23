/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBFilter.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CBBrightestALSFilter : CBFilter

{
    NSMutableDictionary *_alsEvents;
}

- (id)init;
- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (id)filterEvent:(id)arg1;
- (_Bool)displayBrightnessFactorPropertyHandler:(id)arg1;
- (void)forgetDataForService:(struct __IOHIDServiceClient *)arg1;

@end
