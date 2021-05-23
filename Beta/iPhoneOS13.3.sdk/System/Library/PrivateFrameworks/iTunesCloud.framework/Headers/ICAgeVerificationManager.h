/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICAgeVerificationState, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ICAgeVerificationManager : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_ageVerificationStateInternal;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSMutableDictionary *ageVerificationStateInternal;
@property (nonatomic, readonly) ICAgeVerificationState *ageVerificationState;

+ (id)defaultManager;

- (id)_init;
- (void)_registerForNotifications;
- (void)_userIdentityStoreDidChange:(id)arg1;
- (void)getAgeVerificationStateForUserIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateAgeVerificationStateForUserIdentity:(id)arg1 sendNotification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)ageVerificationStateForUserIdentity:(id)arg1;
- (void)_updateAgeVerificationStateAndSendNotification:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_processAgeVerificationState:(id)arg1 forDSID:(id)arg2;
- (void)_runAgeVerificationForUserIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_bagHasValidKeys:(id)arg1;
- (void)getAgeVerificationStateWithCompletion:(CDUnknownBlockType)arg1;

@end
