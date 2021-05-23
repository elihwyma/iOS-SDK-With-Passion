/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, _MRDeviceInfoMessageProtobuf, _MRNowPlayingPlayerPathProtobuf, _MROriginProtobuf;

@protocol OS_dispatch_queue;

@interface MRNowPlayingOriginClientRequests : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    NSNumber *_volumeCapabilities;
    NSNumber *_volume;
    NSMutableArray *_nowPlayingClients;
    NSMutableDictionary *_transactionCallbacks;
    NSMutableArray *_deviceInfoCompletions;
    NSMutableArray *_volumeCompletions;
    NSMutableArray *_volumeCapabilitiesCompletions;
    _MROriginProtobuf *_origin;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

@property (nonatomic, readonly) _MROriginProtobuf *origin;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (copy, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (retain, nonatomic) NSNumber *volumeCapabilities;
@property (retain, nonatomic) NSNumber *volume;

- (id)debugDescription;
- (void)removeClient:(id)arg1;
- (id)initWithOrigin:(id)arg1;
- (void)restoreNowPlayingClientState;
- (id)nowPlayingClients;
- (id)nowPlayingClientRequestsForPlayerPath:(id)arg1;
- (id)existingNowPlayingClientRequestsForPlayerPath:(id)arg1;
- (void)setTransactionCallback:(CDUnknownBlockType)arg1 forName:(unsigned long long)arg2;
- (CDUnknownBlockType)transactionCallbackForName:(unsigned long long)arg1;
- (void)handleDeviceInfoRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleVolumeRequestWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleVolumeCapabilitiesRequestWithCompletion:(CDUnknownBlockType)arg1;

@end
