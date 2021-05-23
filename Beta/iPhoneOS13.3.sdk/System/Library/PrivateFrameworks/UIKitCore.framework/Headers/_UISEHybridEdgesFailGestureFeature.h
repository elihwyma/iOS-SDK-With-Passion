/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISEGestureFeature.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UISEHybridEdgesFailGestureFeature : _UISEGestureFeature

{
    unsigned long long _fails;
    NSArray *_subfeatures;
}

@property (nonatomic, readonly) unsigned long long touchedEdges;
@property (nonatomic, readonly) NSArray *subfeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)debugDictionary;
- (void)featureDidChangeState:(id)arg1;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample *)arg1;
- (id)initWithSubfeatures:(id)arg1;

@end
