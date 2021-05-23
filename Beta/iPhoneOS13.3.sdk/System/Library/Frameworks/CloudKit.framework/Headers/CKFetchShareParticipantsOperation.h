/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKFetchShareParticipantsOperation : CKOperation

{
    CDUnknownBlockType _shareParticipantFetchedBlock;
    CDUnknownBlockType _fetchShareParticipantsCompletionBlock;
    NSArray *_userIdentityLookupInfos;
    NSMutableSet *_discoveredUserIdentities;
    NSMutableDictionary *_lookupErrors;
}

@property (retain, nonatomic) NSMutableSet *discoveredUserIdentities;
@property (retain, nonatomic) NSMutableDictionary *lookupErrors;
@property (copy, nonatomic) NSArray *userIdentityLookupInfos;
@property (copy, nonatomic) CDUnknownBlockType shareParticipantFetchedBlock;
@property (copy, nonatomic) CDUnknownBlockType fetchShareParticipantsCompletionBlock;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (id)initWithUserIdentityLookupInfos:(id)arg1;

@end
