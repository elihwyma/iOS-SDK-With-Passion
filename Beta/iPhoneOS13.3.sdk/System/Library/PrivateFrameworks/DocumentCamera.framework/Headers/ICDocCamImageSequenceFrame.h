/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ICDocCamImageSequenceFrame : NSObject

{
    struct __CVBuffer *_pb;
    NSDictionary *_frameOptions;
}

@property (nonatomic) struct __CVBuffer *pb;
@property (copy, nonatomic) NSDictionary *frameOptions;

@end
