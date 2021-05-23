/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <CommonUtilities/CUTCheckpointTrace.h>

@class CUTCheckpointRange, IDSPeerMessageCheckpointTrace, NSString;

@interface IDSOutgoingMessageCheckpointTrace : CUTCheckpointTrace

{
    NSString *_guid;
    NSString *_service;
    long long _command;
    long long _priority;
    CUTCheckpointRange *_sendToDaemon;
    CUTCheckpointRange *_storeInDatabase;
    CUTCheckpointRange *_compressPayload;
    IDSPeerMessageCheckpointTrace *_peerMessageTrace;
    unsigned long long _uncompressedMessageSize;
    unsigned long long _compressedMessageSize;
}

@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) long long command;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) CUTCheckpointRange *sendToDaemon;
@property (nonatomic, readonly) CUTCheckpointRange *storeInDatabase;
@property (nonatomic, readonly) CUTCheckpointRange *compressPayload;
@property (nonatomic, readonly) IDSPeerMessageCheckpointTrace *peerMessageTrace;
@property (nonatomic) unsigned long long uncompressedMessageSize;
@property (nonatomic) unsigned long long compressedMessageSize;

- (id)_reportMetadata;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithGuid:(id)arg1 service:(id)arg2 command:(long long)arg3 priority:(long long)arg4;

@end
