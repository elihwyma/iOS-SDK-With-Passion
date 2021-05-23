/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSData, NSDictionary, NSNumber, NSString;

@interface MCEASAccountPayload : MCEmailAccountPayloadBase

{
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    NSString *_emailAddress;
    NSNumber *_mailNumberOfPastDaysToSync;
    NSData *_embeddedCertificate;
    NSString *_embeddedCertificateName;
    NSString *_embeddedCertificatePassword;
    NSString *_certificateUUID;
    NSString *_accountPersistentUUID;
    NSData *_certificatePersistentID;
    _Bool _syncDefaultFoldersOnly;
    NSNumber *_enableMailNum;
    NSNumber *_enableContactsNum;
    NSNumber *_enableCalendarsNum;
    NSNumber *_enableRemindersNum;
    NSNumber *_enableNotesNum;
    NSNumber *_enableMailUserOverridableNum;
    NSNumber *_enableContactsUserOverridableNum;
    NSNumber *_enableCalendarsUserOverridableNum;
    NSNumber *_enableRemindersUserOverridableNum;
    NSNumber *_enableNotesUserOverridableNum;
    NSNumber *_useSSL;
    NSNumber *_useOAuth;
    NSString *_OAuthSignInURL;
    NSString *_OAuthTokenRequestURL;
    NSDictionary *_communicationServiceRules;
    NSNumber *_syncDefaultFoldersOnlyNum;
}

@property (nonatomic, readonly) NSNumber *syncDefaultFoldersOnlyNum;
@property (retain, nonatomic, readonly) NSString *accountDescription;
@property (retain, nonatomic, readonly) NSString *hostname;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSNumber *useSSL;
@property (retain, nonatomic) NSNumber *useOAuth;
@property (retain, nonatomic) NSString *OAuthSignInURL;
@property (retain, nonatomic) NSString *OAuthTokenRequestURL;
@property (retain, nonatomic, readonly) NSNumber *mailNumberOfPastDaysToSync;
@property (retain, nonatomic, readonly) NSData *embeddedCertificate;
@property (retain, nonatomic, readonly) NSString *embeddedCertificateName;
@property (copy, nonatomic) NSString *embeddedCertificatePassword;
@property (retain, nonatomic, readonly) NSString *certificateUUID;
@property (nonatomic, readonly) _Bool hasCertificate;
@property (nonatomic, readonly) NSDictionary *communicationServiceRules;
@property (nonatomic, readonly) _Bool enableMail;
@property (nonatomic, readonly) _Bool enableContacts;
@property (nonatomic, readonly) _Bool enableCalendars;
@property (nonatomic, readonly) _Bool enableReminders;
@property (nonatomic, readonly) _Bool enableNotes;
@property (nonatomic, readonly) _Bool enableMailUserOverridable;
@property (nonatomic, readonly) _Bool enableContactsUserOverridable;
@property (nonatomic, readonly) _Bool enableCalendarsUserOverridable;
@property (nonatomic, readonly) _Bool enableRemindersUserOverridable;
@property (nonatomic, readonly) _Bool enableNotesUserOverridable;
@property (copy, nonatomic) NSString *accountPersistentUUID;
@property (retain, nonatomic) NSData *certificatePersistentID;
@property (nonatomic) _Bool syncDefaultFoldersOnly;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)restrictions;
- (_Bool)containsSensitiveUserInformation;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
