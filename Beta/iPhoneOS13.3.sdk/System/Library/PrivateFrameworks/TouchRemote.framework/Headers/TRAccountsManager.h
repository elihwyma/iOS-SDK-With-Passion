/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class ACAccount, ACAccountStore, GKLocalPlayer, NSString, SSAccount;

@interface TRAccountsManager : NSObject

{
    ACAccountStore *_iCloudAccountStore;
}

@property (retain, nonatomic) ACAccountStore *iCloudAccountStore;
@property (copy, nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) SSAccount *activeiTunesStoreAccount;
@property (nonatomic, readonly) ACAccount *activeiCloudAccount;
@property (copy, nonatomic, readonly) NSString *homeSharingAppleID;
@property (copy, nonatomic, readonly) NSString *homeSharingGroupID;
@property (nonatomic, readonly) GKLocalPlayer *localGameCenterPlayer;

+ (id)sharedInstance;

- (id)defaultAccountIDForAuthenticationAccountType:(unsigned long long)arg1;
- (id)accountTypesWithDefaultAccountID:(id)arg1;

@end
