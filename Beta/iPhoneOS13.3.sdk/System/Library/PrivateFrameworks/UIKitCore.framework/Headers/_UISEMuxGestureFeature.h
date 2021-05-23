/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISEGestureFeature.h>

@class NSDictionary, NSMutableDictionary, NSString;

@protocol _UISEGestureFeatureSettings;

__attribute__((visibility("hidden")))
@interface _UISEMuxGestureFeature : _UISEGestureFeature

{
    id <_UISEGestureFeatureSettings> _settings;
    CDUnknownBlockType _createFeatureBlock;
    NSMutableDictionary *_subfeatures;
    unsigned long long _fails;
    unsigned long long _recognizes;
}

@property (nonatomic, readonly) NSDictionary *subfeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)debugDictionary;
- (void)featureDidChangeState:(id)arg1;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;
- (id)initWithSettings:(id)arg1 createFeatureBlock:(CDUnknownBlockType)arg2;

@end
