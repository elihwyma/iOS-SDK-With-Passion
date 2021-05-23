/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSNumber, NSString;

@interface MCEmailAccountPayloadBase : MCPayload

{
    _Bool _preventMove;
    _Bool _preventAppSheet;
    _Bool _SMIMEEnabled;
    _Bool _isRecentsSyncingDisabled;
    _Bool _isMailDropEnabled;
    _Bool _SMIMESigningUserOverrideable;
    _Bool _SMIMESigningIdentityUserOverrideable;
    _Bool _SMIMEEncryptByDefaultUserOverrideable;
    _Bool _SMIMEEncryptionIdentityUserOverrideable;
    _Bool _SMIMEPerMessageSwitchEnabled;
    NSNumber *_SMIMESigningEnabled;
    NSString *_SMIMESigningIdentityUUID;
    NSNumber *_SMIMEEncryptionEnabled;
    NSString *_SMIMEEncryptionIdentityUUID;
    NSData *_SMIMESigningIdentityPersistentID;
    NSData *_SMIMEEncryptionIdentityPersistentID;
    NSNumber *_preventMoveNum;
    NSNumber *_preventAppSheetNum;
    NSNumber *_SMIMEEnabledNum;
    NSNumber *_isRecentsSyncingDisabledNum;
    NSNumber *_isMailDropEnabledNum;
    NSNumber *_SMIMEPerMessageSwitchEnabledNum;
}

@property (retain, nonatomic) NSNumber *preventMoveNum;
@property (retain, nonatomic) NSNumber *preventAppSheetNum;
@property (retain, nonatomic) NSNumber *SMIMEEnabledNum;
@property (retain, nonatomic) NSNumber *isRecentsSyncingDisabledNum;
@property (retain, nonatomic) NSNumber *isMailDropEnabledNum;
@property (retain, nonatomic) NSNumber *SMIMEPerMessageSwitchEnabledNum;
@property (nonatomic) _Bool preventMove;
@property (nonatomic) _Bool preventAppSheet;
@property (nonatomic) _Bool SMIMEEnabled;
@property (nonatomic) _Bool isRecentsSyncingDisabled;
@property (nonatomic) _Bool isMailDropEnabled;
@property (retain, nonatomic) NSNumber *SMIMESigningEnabled;
@property (nonatomic) _Bool SMIMESigningUserOverrideable;
@property (retain, nonatomic) NSString *SMIMESigningIdentityUUID;
@property (retain, nonatomic) NSNumber *SMIMEEncryptionEnabled;
@property (nonatomic) _Bool SMIMEEncryptByDefaultUserOverrideable;
@property (retain, nonatomic) NSString *SMIMEEncryptionIdentityUUID;
@property (retain, nonatomic) NSData *SMIMESigningIdentityPersistentID;
@property (nonatomic) _Bool SMIMESigningIdentityUserOverrideable;
@property (retain, nonatomic) NSData *SMIMEEncryptionIdentityPersistentID;
@property (nonatomic) _Bool SMIMEEncryptionIdentityUserOverrideable;
@property (nonatomic) _Bool SMIMEPerMessageSwitchEnabled;

- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (_Bool)containsSensitiveUserInformation;
- (void)addSMIMEEncryptionPayloadKeysTo:(id)arg1;

@end
