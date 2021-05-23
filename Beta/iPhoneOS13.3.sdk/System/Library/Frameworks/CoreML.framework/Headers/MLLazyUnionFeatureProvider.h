/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSSet;

@protocol MLFeatureProvider;

__attribute__((visibility("hidden")))
@interface MLLazyUnionFeatureProvider : NSObject

{
    id <MLFeatureProvider> _first;
    id <MLFeatureProvider> _second;
}

@property (retain, nonatomic) id <MLFeatureProvider> first;
@property (retain, nonatomic) id <MLFeatureProvider> second;
@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)arg1;
- (id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2;
- (id)unionFeatureProvider;

@end
