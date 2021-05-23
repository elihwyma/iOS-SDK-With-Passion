/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface _ETBufferDataSource : NSObject

{
    unsigned long long _number_of_data_points;
    unsigned long long _batchSize;
    vector_ebb6ef3e _nonBatchBlobNames;
    unordered_map_4e50001a _dataStorage;
    unordered_map_1de83e55 _blobShapes;
}

@property unordered_map_4e50001a dataStorage;
@property unordered_map_1de83e55 blobShapes;
@property unsigned long long number_of_data_points;
@property unsigned long long batchSize;
@property vector_ebb6ef3e nonBatchBlobNames;

- (id).cxx_construct;
- (id)dataPointAtIndex:(unsigned long long)arg1 error:(id *)arg2;
- (unsigned long long)numberOfDataPoints;
- (float *)dataAtIndex:(unsigned long long)arg1 key:(const basic_string_90719d97 *)arg2;
- (id)initWithBlobShapes:(const unordered_map_1de83e55 *)arg1 numberOfDataPoints:(unsigned long long)arg2 batchSize:(unsigned long long)arg3 error:(id *)arg4;

@end
