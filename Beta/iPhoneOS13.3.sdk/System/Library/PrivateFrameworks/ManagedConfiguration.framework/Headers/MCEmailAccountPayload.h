/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSNumber, NSString;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase

{
    NSString *_emailAccountDescription;
    NSString *_emailAccountName;
    NSString *_emailAccountType;
    NSString *_emailAddress;
    NSString *_incomingMailServerAuthentication;
    NSString *_incomingMailServerHostname;
    NSNumber *_incomingMailServerPortNumber;
    _Bool _incomingMailServerUseSSL;
    NSString *_incomingMailServerUsername;
    NSString *_incomingMailServerIMAPPathPrefix;
    NSString *_incomingPassword;
    NSString *_outgoingPassword;
    _Bool _outgoingPasswordSameAsIncomingPassword;
    NSString *_outgoingMailServerAuthentication;
    NSString *_outgoingMailServerHostname;
    NSNumber *_outgoingMailServerPortNumber;
    _Bool _outgoingMailServerUseSSL;
    NSString *_outgoingMailServerUsername;
    NSNumber *_incomingMailServerUseSSLNum;
    NSNumber *_outgoingPasswordSameAsIncomingPasswordNum;
    NSNumber *_outgoingMailServerUseSSLNum;
}

@property (nonatomic, readonly) NSNumber *incomingMailServerUseSSLNum;
@property (nonatomic, readonly) NSNumber *outgoingPasswordSameAsIncomingPasswordNum;
@property (nonatomic, readonly) NSNumber *outgoingMailServerUseSSLNum;
@property (retain, nonatomic, readonly) NSString *emailAccountDescription;
@property (retain, nonatomic, readonly) NSString *emailAccountName;
@property (retain, nonatomic, readonly) NSString *emailAccountType;
@property (retain, nonatomic, readonly) NSString *emailAddress;
@property (retain, nonatomic, readonly) NSString *incomingMailServerAuthentication;
@property (retain, nonatomic, readonly) NSString *incomingMailServerHostname;
@property (retain, nonatomic, readonly) NSNumber *incomingMailServerPortNumber;
@property (nonatomic, readonly) _Bool incomingMailServerUseSSL;
@property (retain, nonatomic, readonly) NSString *incomingMailServerUsername;
@property (retain, nonatomic, readonly) NSString *incomingMailServerIMAPPathPrefix;
@property (retain, nonatomic, readonly) NSString *incomingPassword;
@property (retain, nonatomic, readonly) NSString *outgoingPassword;
@property (nonatomic, readonly) _Bool outgoingPasswordSameAsIncomingPassword;
@property (retain, nonatomic, readonly) NSString *outgoingMailServerAuthentication;
@property (retain, nonatomic, readonly) NSString *outgoingMailServerHostname;
@property (retain, nonatomic, readonly) NSNumber *outgoingMailServerPortNumber;
@property (nonatomic, readonly) _Bool outgoingMailServerUseSSL;
@property (retain, nonatomic, readonly) NSString *outgoingMailServerUsername;

+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;
+ (id)profileNameFromAccountTag:(id)arg1;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)_emailAccountTypeLocalizedString;
- (id)_authenticationTypeLocalizedString:(id)arg1;
- (_Bool)containsSensitiveUserInformation;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
