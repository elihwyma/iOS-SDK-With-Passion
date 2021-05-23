/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISEGestureFeature.h>

@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;

__attribute__((visibility("hidden")))
@interface _UISEOrthogonalHysteresisGestureFeature : _UISEGestureFeature

{
    id <_UISEGestureFeatureSettings> _settings;
    id <_UISETouchedEdgesProvider> _provider;
    struct CGPoint _initialLocation;
    double _initialTimestamp;
}

- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;
- (id)initWithSettings:(id)arg1 touchedEdgesProvider:(id)arg2;

@end
