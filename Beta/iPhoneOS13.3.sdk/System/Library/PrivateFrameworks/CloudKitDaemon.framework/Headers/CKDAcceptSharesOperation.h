/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDAcceptSharesOperation : CKDDatabaseOperation

{
    CDUnknownBlockType _acceptCompletionBlock;
    NSMutableDictionary *_clientProvidedMetadatasByURL;
    NSMutableArray *_shareURLsToAccept;
    NSMutableArray *_acceptedShareURLsToFetch;
    NSMutableDictionary *_shareMetadatasToAcceptByURL;
    unsigned long long _numShareAcceptAttempts;
}

@property (retain, nonatomic) NSMutableDictionary *clientProvidedMetadatasByURL;
@property (retain, nonatomic) NSMutableArray *shareURLsToAccept;
@property (retain, nonatomic) NSMutableArray *acceptedShareURLsToFetch;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasToAcceptByURL;
@property (nonatomic) unsigned long long numShareAcceptAttempts;
@property (copy, nonatomic) CDUnknownBlockType acceptCompletionBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id *)arg3;
- (void)_fetchMetadataForShares;
- (void)_prepareShareMetadata;
- (void)_fetchAcceptedShares;
- (void)_decryptShareMetadata;
- (_Bool)_acceptShares;
- (void)_performCallbackForURL:(id)arg1 withShare:(id)arg2 error:(id)arg3;
- (_Bool)_callingParticipantOONForShareMetadata:(id)arg1;
- (void)_handleShareURLAccepted:(id)arg1 forShare:(id)arg2 responseCode:(id)arg3;
- (unsigned long long)sharingServiceTypeForShareMetadata:(id)arg1;
- (id)_keySwapForOONParticipant:(id)arg1;
- (_Bool)_validateInvitedPCSCanBeDecryptedForShare:(id)arg1;

@end
