/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSString, _NMRPlaybackQueueResponseProtobuf;

@interface NMRPlaybackQueueResponse : NSObject

{
    _NMRPlaybackQueueResponseProtobuf *_protobuf;
}

@property (nonatomic, readonly) void *playbackQueue;
@property (nonatomic, readonly) struct __CFError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)protobufData;
- (id)initWithPlaybackQueue:(void *)arg1 error:(struct __CFError *)arg2;
- (id)initWithProtobufData:(id)arg1;
- (void)invokeCompletion:(CDUnknownBlockType)arg1;

@end
