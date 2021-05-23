/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@interface NPTuscanyLoopbackConnection : NSObject

{
    unsigned long long _blobSizes[4];
    struct nw_protocol _protocol;
    struct nw_frame_array_s _currentInputFrames;
    _Bool _waitingForOutput;
    unsigned long long _currentBlobSizeIndex;
}

@property (readonly) struct nw_protocol *protocol;
@property unsigned long long currentBlobSizeIndex;
@property _Bool waitingForOutput;

- (id)init;
- (void)dealloc;
- (void)handleDetachedFromProtocol;
- (unsigned int)addOutputFramesToArray:(struct nw_frame_array_s *)arg1 maximumBytes:(unsigned int)arg2 minimumBytes:(unsigned int)arg3 maximumFrameCount:(unsigned int)arg4;
- (void)handleOutputFrame:(id)arg1;
- (void)notifyInputHandler;
- (unsigned int)addInputFramesToArray:(struct nw_frame_array_s *)arg1 maximumBytes:(unsigned int)arg2 minimumBytes:(unsigned int)arg3 maximumFrameCount:(unsigned int)arg4;

@end
