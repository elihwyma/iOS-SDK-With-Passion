/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISEGestureFeature.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UISEPerTypeEdgesFailGestureFeature : _UISEGestureFeature

{
    NSDictionary *_edgeTypeSubfeatures;
}

@property (nonatomic, readonly) unsigned long long touchedEdges;
@property (nonatomic, readonly) NSDictionary *edgeTypeSubfeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)debugDictionary;
- (void)featureDidChangeState:(id)arg1;
- (id)initWithEdgeTypeSubfeatures:(id)arg1;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;

@end
