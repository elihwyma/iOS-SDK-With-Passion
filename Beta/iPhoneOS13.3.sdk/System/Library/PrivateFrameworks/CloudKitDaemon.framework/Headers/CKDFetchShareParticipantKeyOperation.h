/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDFetchShareParticipantKeyOperation : CKDDatabaseOperation

{
    _Bool _hasAttemptedShareUpdate;
    CDUnknownBlockType _shareParticipantKeyFetchedBlock;
    NSMutableArray *_shareIDs;
    NSDictionary *_baseTokensByShareID;
    NSDictionary *_childRecordIDsByShareID;
    NSMutableDictionary *_sharesNeedingUpdateByID;
}

@property (retain, nonatomic) NSMutableArray *shareIDs;
@property (retain, nonatomic) NSDictionary *baseTokensByShareID;
@property (retain, nonatomic) NSDictionary *childRecordIDsByShareID;
@property (retain, nonatomic) NSMutableDictionary *sharesNeedingUpdateByID;
@property (nonatomic) _Bool hasAttemptedShareUpdate;
@property (copy, nonatomic) CDUnknownBlockType shareParticipantKeyFetchedBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)fetchSharesFromServer;
- (void)updateShares;
- (void)_sendErrorForFailedShares;
- (void)_performCallbackForShareID:(id)arg1 withParticipantKey:(id)arg2 error:(id)arg3;
- (id)_participantKeyFromShare:(id)arg1 withError:(id *)arg2;
- (void)_handleFetchedShare:(id)arg1 withID:(id)arg2 error:(id)arg3;

@end
