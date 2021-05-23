/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <CommonUtilities/CUTCheckpointTrace.h>

@class CUTCheckpointRange, NSMutableArray, NSString;

@interface IDSPeerMessageCheckpointTrace : CUTCheckpointTrace

{
    NSString *_guid;
    CUTCheckpointRange *_IDQuery;
    CUTCheckpointRange *_messageOnQueue;
    NSMutableArray *_mutableEncryptionCheckpoints;
    NSMutableArray *_mutableAggregateMessageSendCheckpoints;
}

@property (retain, nonatomic) NSMutableArray *mutableEncryptionCheckpoints;
@property (retain, nonatomic) NSMutableArray *mutableAggregateMessageSendCheckpoints;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) CUTCheckpointRange *IDQuery;
@property (nonatomic, readonly) CUTCheckpointRange *messageOnQueue;

- (id)checkpoints;
- (id)initWithGuid:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)checkpointByAppendingEncryptionCheckpoint;
- (id)checkpointByAppendingAggregateMessageSendCheckpoint;
- (id)encryptionCheckpoints;
- (id)aggregateMessageSendCheckpoints;

@end
