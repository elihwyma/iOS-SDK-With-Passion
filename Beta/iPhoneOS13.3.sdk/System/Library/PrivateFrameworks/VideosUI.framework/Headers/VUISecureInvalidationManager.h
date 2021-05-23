/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableSet, NSString, TVPStateMachine;

__attribute__((visibility("hidden")))
@interface VUISecureInvalidationManager : NSObject

{
    _Bool _networkErrorOccurredDuringInvalidation;
    TVPStateMachine *_stateMachine;
    NSMutableArray *_keyLoaders;
    NSMutableSet *_penaltyBox;
    unsigned long long _backgroundTaskIdentifier;
}

@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) NSMutableArray *keyLoaders;
@property (retain, nonatomic) NSMutableSet *penaltyBox;
@property (nonatomic) _Bool networkErrorOccurredDuringInvalidation;
@property (nonatomic) unsigned long long backgroundTaskIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_registerStateMachineHandlers;
- (_Bool)storeFPSKeyLoader:(id)arg1 shouldKeyRequestContinueInvalidationAfterLoadingNonce:(id)arg2;
- (void)invalidateKeysForDeletedVideos;
- (void)removeDeletionInfoFromPenaltyBox:(id)arg1;
- (void)_networkReachbilityDidChange:(id)arg1;
- (_Bool)_validateParamsForDeletionInfo:(id)arg1;
- (void)_sendInvalidationRequestsForDeletionInfoArrays:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendInvalidationRequestsForFirstArray:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_getParamsForDeletionInfo:(id)arg1 keyServerURL:(id *)arg2 nonceURL:(id *)arg3 keyIdentifier:(id *)arg4 offlineKeyData:(id *)arg5 dsid:(id *)arg6 additionalRequestParams:(id *)arg7 contentID:(id *)arg8;
- (id)_invalidateKeysForDeletedVideos;

@end
