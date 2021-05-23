/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@protocol OS_nw_context;

@interface NELoopbackConnection : NSObject

{
    unsigned long long _blobSizes[4];
    struct nw_protocol _protocol;
    struct nw_frame_array_s _currentInputFrames;
    _Bool _outputFinished;
    NSObject<OS_nw_context> *_context;
    unsigned long long _currentBlobSizeIndex;
    unsigned long long _totalBytesReceived;
}

@property (readonly) struct nw_protocol *protocol;
@property (readonly) NSObject<OS_nw_context> *context;
@property unsigned long long currentBlobSizeIndex;
@property _Bool outputFinished;
@property unsigned long long totalBytesReceived;

- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)handleDetachedFromProtocol;
- (unsigned int)addOutputFramesToArray:(struct nw_frame_array_s *)arg1 maximumBytes:(unsigned int)arg2 minimumBytes:(unsigned int)arg3 maximumFrameCount:(unsigned int)arg4;
- (unsigned int)addInputFramesToArray:(struct nw_frame_array_s *)arg1 maximumBytes:(unsigned int)arg2 minimumBytes:(unsigned int)arg3 maximumFrameCount:(unsigned int)arg4 outIsEOF:(_Bool *)arg5;
- (void)handleOutputFinished;
- (void)handleOutputFrame:(id)arg1;
- (void)notifyInputHandler;

@end
