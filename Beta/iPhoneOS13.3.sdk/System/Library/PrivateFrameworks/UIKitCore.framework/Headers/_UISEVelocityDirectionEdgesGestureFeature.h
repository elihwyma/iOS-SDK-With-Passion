/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISEGestureFeature.h>

@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;

__attribute__((visibility("hidden")))
@interface _UISEVelocityDirectionEdgesGestureFeature : _UISEGestureFeature

{
    id <_UISEGestureFeatureSettings> _settings;
    id <_UISETouchedEdgesProvider> _provider;
    _Bool _exactMatchEdges;
    struct CGPoint _initialLocation;
    unsigned long long _touchedEdges;
}

@property (nonatomic, readonly) unsigned long long touchedEdges;

- (id)debugDictionary;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;
- (id)initWithSettings:(id)arg1 touchedEdgesProvider:(id)arg2 exactMatchEdges:(_Bool)arg3;

@end
