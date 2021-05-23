/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISEGestureFeature.h>

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEBackProjectEdgesFailGestureFeature : _UISEGestureFeature

{
    id <_UISEGestureFeatureSettings> _settings;
    _Bool _hasDoneTest;
    struct CGPoint _initialLocation;
    unsigned long long _touchedEdges;
}

@property (nonatomic, readonly) unsigned long long touchedEdges;

- (id)initWithSettings:(id)arg1;
- (id)debugDictionary;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;

@end
