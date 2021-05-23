/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSNumber, NSString, _NMRMediaRemoteGetStateMessageProfobuf;

@interface NMRMediaRemoteGetStateMessage : NSObject

{
    _NMRMediaRemoteGetStateMessageProfobuf *_protobuf;
}

@property (nonatomic, readonly) NSData *nowPlayingInfoDigest;
@property (nonatomic, readonly) NSData *applicationInfoDigest;
@property (nonatomic, readonly) NSData *supportedCommandsDigest;
@property (nonatomic, readonly) NSData *playbackQueueDigest;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)messageWithNowPlayingInfoDigest:(id)arg1 applicationInfoDigest:(id)arg2 supportedCommandsDigest:(id)arg3 playbackQueueDigest:(id)arg4 originIdentifier:(id)arg5;

- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;
- (id)_initWithNowPlayingInfoDigest:(id)arg1 applicationInfoDigest:(id)arg2 supportedCommandsDigest:(id)arg3 playbackQueueDigest:(id)arg4 originIdentifier:(id)arg5;

@end
