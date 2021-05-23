/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@protocol MLBatchProvider;

@interface MLShufflingBatchProvider : NSObject

{
    struct vector<long, std::__1::allocator<long>> indices;
    struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> randomNumberGenerator;
    id <MLBatchProvider> _batchProvider;
}

@property (retain) id <MLBatchProvider> batchProvider;
@property (nonatomic, readonly) long long count;

- (id).cxx_construct;
- (void)shuffle;
- (id)featuresAtIndex:(long long)arg1;
- (id)initWithBatchProvider:(id)arg1 seed:(id)arg2;

@end
