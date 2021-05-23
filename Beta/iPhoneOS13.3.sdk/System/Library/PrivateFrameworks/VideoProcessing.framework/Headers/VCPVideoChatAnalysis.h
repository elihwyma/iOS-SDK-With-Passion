/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, VCPFaceTimeSession;

@protocol OS_dispatch_queue;

@interface VCPVideoChatAnalysis : NSObject

{
    NSObject<OS_dispatch_queue> *_detectionQueue;
    VCPFaceTimeSession *_faceTimeSession;
    NSMutableArray *_faces;
    _Bool _finished;
}

+ (id)videoChatAnalysis;

- (id)init;
- (int)detectFaces:(struct __CVBuffer *)arg1;
- (void)checkAddFaces;
- (int)analyzeFrame:(struct __CVBuffer *)arg1;
- (_Bool)persistAnalysis;

@end
