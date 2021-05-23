/*
 Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

#import <Foundation/NSObject.h>

@class AVTimedMetadataGroup;

@interface SampleBufferAndMetadata : NSObject

{
    struct opaqueCMSampleBuffer *_sampleBuffer;
    AVTimedMetadataGroup *_metadata;
}

@property struct opaqueCMSampleBuffer *sampleBuffer;
@property (retain) AVTimedMetadataGroup *metadata;

@end
