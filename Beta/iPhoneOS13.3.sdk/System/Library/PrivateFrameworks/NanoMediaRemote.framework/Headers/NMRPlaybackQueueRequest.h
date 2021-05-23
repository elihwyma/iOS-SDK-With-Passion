/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSString, _NMRPlaybackQueueRequestProtobuf;

@interface NMRPlaybackQueueRequest : NSObject

{
    _NMRPlaybackQueueRequestProtobuf *_protobuf;
}

@property (nonatomic, readonly) void *request;
@property (nonatomic, readonly) void *playerPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithRequest:(void *)arg1 playerPath:(void *)arg2;
- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;
- (void)performWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
