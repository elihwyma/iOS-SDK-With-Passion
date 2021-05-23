/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@protocol ETDataSource;

__attribute__((visibility("hidden")))
@interface ETDataSourceWithCache : NSObject

{
    id <ETDataSource> _source;
    struct map<int, ETDataPoint *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, ETDataPoint *>>> _cache;
    basic_string_90719d97 dump_path;
    _Bool dump_descriptors;
}

- (id).cxx_construct;
- (id)initWithDataSource:(id)arg1;
- (int)numberOfDataPoints;
- (id)dataPointAtIndex:(int)arg1;
- (id)initWithDataSource:(id)arg1 dumpPath:(id)arg2;

@end
