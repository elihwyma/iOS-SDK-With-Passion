/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface ETDataSourceBuf : NSObject

{
    struct map<std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 2>>, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<Espresso::blob<float, 2>>>>> blobs;
    int number_of_data_points;
}

- (id).cxx_construct;
- (int)numberOfDataPoints;
- (float *)dataAtIndex:(unsigned long long)arg1 key:(const basic_string_90719d97 *)arg2;
- (id)dataPointAtIndex:(int)arg1;
- (void)setBlobs:(const map_6aef7db1 *)arg1 numberOfDataPoints:(int)arg2 nonBatches:(const vector_ebb6ef3e *)arg3;

@end
