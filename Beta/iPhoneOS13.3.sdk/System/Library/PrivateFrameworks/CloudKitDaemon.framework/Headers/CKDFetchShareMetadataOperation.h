/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDOperation.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface CKDFetchShareMetadataOperation : CKDOperation

{
    _Bool _forceDSRefetch;
    _Bool _errorOnOON;
    _Bool _shouldFetchRootRecord;
    _Bool _clientWillDisplaySystemAcceptPrompt;
    CDUnknownBlockType _shareMetadataFetchedBlock;
    NSMutableArray *_shareURLsToFetch;
    NSMutableDictionary *_shareTokenMetadatasToFetchByURL;
    NSSet *_rootRecordDesiredKeysSet;
    NSDictionary *_shareInvitationTokensByShareURL;
}

@property (retain, nonatomic) NSMutableArray *shareURLsToFetch;
@property (retain, nonatomic) NSMutableDictionary *shareTokenMetadatasToFetchByURL;
@property (nonatomic) _Bool shouldFetchRootRecord;
@property (retain, nonatomic) NSSet *rootRecordDesiredKeysSet;
@property (nonatomic) _Bool clientWillDisplaySystemAcceptPrompt;
@property (retain, nonatomic) NSDictionary *shareInvitationTokensByShareURL;
@property (nonatomic) _Bool forceDSRefetch;
@property (nonatomic) _Bool errorOnOON;
@property (copy, nonatomic) CDUnknownBlockType shareMetadataFetchedBlock;

- (void)main;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (void)_prepareShortTokens;
- (void)_fetchShortTokenMetadata;
- (void)_handleTokenResolveWithLookupInfo:(id)arg1 shareMetadata:(id)arg2 responseCode:(id)arg3 urlByShortTokenLookupInfos:(id)arg4 tokensToFetchByURL:(id)arg5;
- (void)_performCallbackForURL:(id)arg1 withMetadata:(id)arg2 error:(id)arg3;
- (id)_decodeProtectedFullToken:(id)arg1 tokenMetadata:(id)arg2;
- (void)_continueSharePCSPrepForShareMetadata:(id)arg1 shareURL:(id)arg2;
- (void)_prepPPPCSDataForDugongShareMetadata:(id)arg1 withInvitationToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_continueHandlingFetchedShareMetadata:(id)arg1 shareURL:(id)arg2;
- (void)_decryptRootRecordsForShareURL:(id)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_currentUserIsOONForShareMetadata:(id)arg1;

@end
