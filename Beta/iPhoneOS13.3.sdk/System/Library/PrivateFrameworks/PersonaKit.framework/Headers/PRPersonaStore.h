/*
 Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
 */

#import <Foundation/NSObject.h>

@class NSLock, NSXPCConnection, NSXPCListenerEndpoint;

@protocol OS_dispatch_queue;

@interface PRPersonaStore : NSObject

{
    NSXPCConnection *_personaServiceConnection;
    NSLock *_connectionLock;
    NSLock *_dataVendingFlagLock;
    _Bool _hasVendedData;
    NSXPCListenerEndpoint *_serviceListenerEndpoint;
    NSObject<OS_dispatch_queue> *_replyHandlingQueue;
}

@property (nonatomic, readonly) _Bool hasVendedData;

- (id)init;
- (void)dealloc;
- (void)currentLikenessForPrimaryiCloudAccountWithDesiredFreshness:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allLikenessesForPrimaryiCloudAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)likenessForEmailAddress:(id)arg1 desiredFreshness:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)likenessForPhoneNumber:(id)arg1 desiredFreshness:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveLikeness:(id)arg1 forPrimayiCloudAccountWithCompletion:(CDUnknownBlockType)arg2;
- (void)changeCurrentSelfLikenessToLikenessWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeLikeness:(id)arg1 forPrimayiCloudAccountWithCompletion:(CDUnknownBlockType)arg2;
- (void)removeAllLikenessForPrimaryiCloudAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)donateLikeness:(id)arg1 forEmailAddress:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)donateLikeness:(id)arg1 forPhoneNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)likenessesWithExternalIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAppleIDEvent:(unsigned long long)arg1 account:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)screenNameForPrimaryiCloudAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)screenNameForAppleIDWithAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)screenNameForEmailAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)screenNameForPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setScreenName:(id)arg1 forAppleIDWithAltDSID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setScreenName:(id)arg1 forPrimaryiCloudAccountWithCompletion:(CDUnknownBlockType)arg2;
- (id)initWithServiceListenerEndpoint:(id)arg1;
- (void)_startListeningForCacheChangeNotifications;
- (void)_stopListeningForCacheChangeNotifications;
- (void)_setHasVendedData:(_Bool)arg1;
- (void)currentLikenessForPrimaryiCloudAccountWithCompletion:(CDUnknownBlockType)arg1;
- (void)likenessForPhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)likenessForEmailAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLikeness:(id)arg1 forPrimayiCloudAccountWithCompletion:(CDUnknownBlockType)arg2;
- (unsigned char)likenessVersionDigestForEmail:(id)arg1;
- (unsigned char)likenessVersionDigestForPhoneNumber:(id)arg1;
- (void)setLikenessVersionDigest:(unsigned char)arg1 forEmail:(id)arg2;
- (void)setLikenessVersionDigest:(unsigned char)arg1 forPhoneNumber:(id)arg2;
- (id)likenessDataForPropagationToRecipient:(id)arg1 lastContactDate:(id)arg2;
- (void)donateLikenessData:(id)arg1 forSenderID:(id)arg2 isPhoneNumber:(_Bool)arg3;
- (id)likenessWithUniqueID:(id)arg1;

@end
