/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSArray;

@protocol MLBatchProvider;

__attribute__((visibility("hidden")))
@interface MLIndexedBatchProvider : NSObject

{
    id <MLBatchProvider> _fullBatch;
    NSArray *_indices;
}

@property (retain, nonatomic) id <MLBatchProvider> fullBatch;
@property (retain, nonatomic) NSArray *indices;
@property (nonatomic, readonly) long long count;

- (id)featuresAtIndex:(long long)arg1;
- (id)initWithBatch:(id)arg1 indices:(id)arg2 error:(id *)arg3;

@end
