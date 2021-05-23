/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISEGestureFeature.h>

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEInitialEdgesFailGestureFeature : _UISEGestureFeature

{
    id <_UISEGestureFeatureSettings> _settings;
    _Bool _useEdgeRegionSize;
}

- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;
- (id)initWithSettings:(id)arg1 useEdgeRegionSize:(_Bool)arg2;

@end
