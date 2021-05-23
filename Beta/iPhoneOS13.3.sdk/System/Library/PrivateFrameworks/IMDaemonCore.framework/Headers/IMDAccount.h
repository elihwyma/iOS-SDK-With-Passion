/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class IMDService, IMDServiceSession, NSDictionary, NSMutableDictionary, NSString;

@interface IMDAccount : NSObject

{
    NSMutableDictionary *_accountDefaults;
    NSString *_account;
    long long _accountType;
    IMDService *_service;
    IMDServiceSession *_session;
    NSMutableDictionary *_myStatus;
    NSDictionary *_lastPostedStatus;
    _Bool _isLoading;
    _Bool _isManaged;
    NSString *_loginStatusMessage;
    unsigned int _loginStatus;
    int _disconnectReason;
}

@property (nonatomic) _Bool isLoading;
@property (nonatomic) _Bool wasDisabledAutomatically;
@property (nonatomic, readonly) _Bool shouldPublishNowPlaying;
@property (nonatomic, readonly) int registrationStatus;
@property (nonatomic, readonly) int registrationError;
@property (retain, nonatomic, readonly) NSDictionary *registrationAlertInfo;
@property (retain, nonatomic, readonly) NSDictionary *statusToSave;
@property (retain, nonatomic, readonly) NSDictionary *statusToPost;
@property (retain, nonatomic, readonly) NSDictionary *accountInfoToPost;
@property (retain, nonatomic, readonly) NSDictionary *accountDefaults;
@property (retain, nonatomic, readonly) NSString *accountID;
@property (retain, nonatomic, readonly) NSString *loginID;
@property (retain, nonatomic, readonly) IMDService *service;
@property (retain, nonatomic) IMDServiceSession *session;
@property (nonatomic, readonly) _Bool isActive;
@property (nonatomic, readonly) _Bool isDisabled;
@property (nonatomic) _Bool isManaged;
@property (nonatomic, readonly) _Bool canMakeDowngradeRoutingChecks;
@property (retain, nonatomic, readonly) NSDictionary *status;
@property (nonatomic, readonly) unsigned int serviceLoginStatus;
@property (nonatomic, readonly) int serviceDisconnectReason;
@property (retain, nonatomic, readonly) NSString *serviceLoginStatusMessage;
@property (nonatomic, readonly) long long accountType;

- (void)dealloc;
- (id)_registrationInfo;
- (void)systemDidBecomeIdle;
- (void)systemDidBecomeUnidle;
- (void)writeAccountDefaults:(id)arg1;
- (void)postAccountCapabilitiesToListener:(id)arg1;
- (void)changeStatus:(id)arg1;
- (void)_updateIdle;
- (void)_forceSetLoginStatus:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (void)setLoginStatus:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3;
- (void)postAccountCapabilities;
- (void)createSessionIfNecessary;
- (void)releaseSession;
- (void)tunesController:(id)arg1 playerInfoChanged:(id)arg2;
- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;
- (void)setLoginStatus:(unsigned int)arg1 message:(id)arg2;

@end
