/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@protocol MLBatchProvider;

__attribute__((visibility("hidden")))
@interface MLWindowedBatchProvider : NSObject

{
    id <MLBatchProvider> _fullBatch;
    long long _startIndex;
    long long _windowLength;
}

@property (retain, nonatomic) id <MLBatchProvider> fullBatch;
@property (nonatomic) long long startIndex;
@property (nonatomic) long long windowLength;
@property (nonatomic, readonly) long long count;

- (id)featuresAtIndex:(long long)arg1;
- (id)initWithBatch:(id)arg1 startIndex:(long long)arg2 windowLength:(long long)arg3 error:(id *)arg4;

@end
