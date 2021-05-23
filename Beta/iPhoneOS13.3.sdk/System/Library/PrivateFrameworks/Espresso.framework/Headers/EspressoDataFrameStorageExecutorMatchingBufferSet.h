/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSString;

@interface EspressoDataFrameStorageExecutorMatchingBufferSet : NSObject

{
    unsigned long long _index;
    NSString *_name;
    struct __CVBuffer *_computed_pb;
    CDStruct_0a65202a _reference_buffer;
    CDStruct_0a65202a _computed_buffer;
    CDStruct_0a65202a _groundtruth_buffer;
}

@property unsigned long long index;
@property (retain) NSString *name;
@property CDStruct_0a65202a reference_buffer;
@property CDStruct_0a65202a computed_buffer;
@property struct __CVBuffer *computed_pb;
@property CDStruct_0a65202a groundtruth_buffer;

@end
