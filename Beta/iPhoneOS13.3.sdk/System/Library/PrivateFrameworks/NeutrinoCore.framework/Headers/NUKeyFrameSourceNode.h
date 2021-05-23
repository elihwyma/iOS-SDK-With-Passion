/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUVideoFrameSourceNode.h>

@class NSObject, NUVideoSourceNode;

@protocol OS_dispatch_queue;

@interface NUKeyFrameSourceNode : NUVideoFrameSourceNode

{
    NSObject<OS_dispatch_queue> *_queue;
    NUVideoSourceNode *_videoSourceNode;
    CDStruct_1b6d18a9 _frameTime;
    struct __CVBuffer *_pixelBuffer;
}

- (void)dealloc;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (id)initWithVideoSource:(id)arg1 time:(CDStruct_1b6d18a9)arg2 settings:(id)arg3 orientation:(long long)arg4;
- (id)initWithSettings:(id)arg1 orientation:(long long)arg2;
- (struct __CVBuffer *)_pixelBuffer:(out id *)arg1;

@end
