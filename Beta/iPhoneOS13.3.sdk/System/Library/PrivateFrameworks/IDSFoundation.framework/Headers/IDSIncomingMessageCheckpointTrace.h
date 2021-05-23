/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <CommonUtilities/CUTCheckpointTrace.h>

@class CUTCheckpointRange, NSString;

@interface IDSIncomingMessageCheckpointTrace : CUTCheckpointTrace

{
    NSString *_guid;
    NSString *_service;
    long long _command;
    CUTCheckpointRange *_storeInMessageStore;
    CUTCheckpointRange *_decryption;
    CUTCheckpointRange *_sendToClient;
}

@property (retain, nonatomic) NSString *guid;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) long long command;
@property (nonatomic, readonly) CUTCheckpointRange *storeInMessageStore;
@property (nonatomic, readonly) CUTCheckpointRange *decryption;
@property (nonatomic, readonly) CUTCheckpointRange *sendToClient;

- (id)_reportMetadata;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)initWithService:(id)arg1 command:(long long)arg2 uniqueIdentifier:(id)arg3;

@end
