/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@protocol MLBatchProvider;

__attribute__((visibility("hidden")))
@interface MLLazyUnionBatchProvider : NSObject

{
    id <MLBatchProvider> _first;
    id <MLBatchProvider> _second;
}

@property (retain, nonatomic) id <MLBatchProvider> first;
@property (retain, nonatomic) id <MLBatchProvider> second;
@property (nonatomic, readonly) long long count;

- (id)featuresAtIndex:(long long)arg1;
- (id)initWithFeaturesFrom:(id)arg1 addedToFeaturesFrom:(id)arg2 error:(id *)arg3;

@end
