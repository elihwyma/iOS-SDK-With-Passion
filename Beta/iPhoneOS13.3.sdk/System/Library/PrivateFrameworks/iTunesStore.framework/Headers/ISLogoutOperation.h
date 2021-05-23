/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSString, SSAccount;

@interface ISLogoutOperation

{
    SSAccount *_account;
    NSString *_logKey;
}

@property (retain, nonatomic) SSAccount *account;
@property (retain, nonatomic) NSString *logKey;

- (void)run;
- (id)_copyAuthenticationContext;
- (void)_disableAutomaticDownloadKinds;
- (void)_disableBookkeeper;
- (void)_sendLogoutRequest;
- (id)_sbsyncData;
- (id)_createDisableBookkeeperRequestPropertiesWithURL:(id)arg1;
- (id)_createLogoutRequestProperties;
- (id)initWithAccount:(id)arg1 logKey:(id)arg2;

@end
