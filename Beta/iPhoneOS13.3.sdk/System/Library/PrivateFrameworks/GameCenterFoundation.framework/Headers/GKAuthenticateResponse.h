/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerCredential, NSString, NSURL;

@interface GKAuthenticateResponse : GKInternalRepresentation

{
    _Bool _loginDisabled;
    _Bool _passwordChangeRequired;
    _Bool _shouldShowLinkAccountsUI;
    GKPlayerCredential *_credential;
    NSURL *_passwordChangeURL;
    NSString *_alertTitle;
    NSString *_alertMessage;
    NSString *_lastPersonalizationVersionDisplayed;
    unsigned long long _lastPrivacyNoticeVersionDisplayed;
}

@property (retain, nonatomic) GKPlayerCredential *credential;
@property (nonatomic) _Bool loginDisabled;
@property (nonatomic) _Bool passwordChangeRequired;
@property (retain, nonatomic) NSURL *passwordChangeURL;
@property (nonatomic) _Bool shouldShowLinkAccountsUI;
@property (retain, nonatomic) NSString *alertTitle;
@property (retain, nonatomic) NSString *alertMessage;
@property (retain, nonatomic) NSString *lastPersonalizationVersionDisplayed;
@property (nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;

+ (id)secureCodedPropertyKeys;

@end
