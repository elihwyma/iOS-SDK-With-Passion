/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSNumber, NSString, _NMRMediaRemoteSetStateMessageProfobuf;

@interface NMRMediaRemoteSetStateMessage : NSObject

{
    _NMRMediaRemoteSetStateMessageProfobuf *_protobuf;
}

@property (nonatomic, readonly) NSData *nowPlayingInfoData;
@property (nonatomic, readonly) NSData *applicationInfoData;
@property (nonatomic, readonly) NSData *supportedCommandsData;
@property (nonatomic, readonly) NSData *playbackQueueData;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)messageWithNowPlayingInfo:(id)arg1 applicationInfo:(id)arg2 supportedCommands:(id)arg3 playbackQueue:(id)arg4 originIdentifier:(id)arg5;

- (id)protobufData;
- (id)initWithProtobufData:(id)arg1;
- (id)_initWithNowPlayingInfo:(id)arg1 applicationInfo:(id)arg2 supportedCommands:(id)arg3 playbackQueue:(id)arg4 originIdentifier:(id)arg5;

@end
