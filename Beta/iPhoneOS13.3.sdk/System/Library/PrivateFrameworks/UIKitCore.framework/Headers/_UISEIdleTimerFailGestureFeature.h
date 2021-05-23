/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISEGestureFeature.h>

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEIdleTimerFailGestureFeature : _UISEGestureFeature

{
    id <_UISEGestureFeatureSettings> _settings;
}

- (id)initWithSettings:(id)arg1;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;

@end
