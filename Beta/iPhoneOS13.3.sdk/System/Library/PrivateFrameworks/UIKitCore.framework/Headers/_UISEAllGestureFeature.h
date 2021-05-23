/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UISEGestureFeature.h>

@class NSArray, NSMutableIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _UISEAllGestureFeature : _UISEGestureFeature

{
    NSMutableIndexSet *_unrecognizedIndexes;
    NSArray *_subfeatures;
}

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
