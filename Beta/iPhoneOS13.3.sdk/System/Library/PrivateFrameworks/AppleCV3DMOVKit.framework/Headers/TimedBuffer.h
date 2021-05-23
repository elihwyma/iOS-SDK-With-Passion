/*
 Image: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
 */

#import <Foundation/NSObject.h>

@interface TimedBuffer : NSObject

{
    struct __CVBuffer *_buffer;
    CDStruct_1b6d18a9 _timestamp;
}

@property (nonatomic) struct __CVBuffer *buffer;
@property (nonatomic) CDStruct_1b6d18a9 timestamp;

- (id)initWithBuffer:(struct __CVBuffer *)arg1 atTimestamp:(CDStruct_1b6d18a9)arg2;

@end
