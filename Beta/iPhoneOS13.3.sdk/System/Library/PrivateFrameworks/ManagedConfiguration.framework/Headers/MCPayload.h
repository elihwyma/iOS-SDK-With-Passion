/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class MCProfile, NSArray, NSDictionary, NSString;

@interface MCPayload : NSObject

{
    MCProfile *_profile;
    NSString *_type;
    NSString *_payloadDescription;
    NSString *_displayName;
    NSString *_identifier;
    NSString *_organization;
    NSString *_UUID;
    long long _version;
    NSString *_persistentResourceID;
    _Bool _mustInstallNonInteractively;
}

@property (weak, nonatomic, readonly) MCProfile *profile;
@property (retain, nonatomic, readonly) NSString *friendlyName;
@property (retain, nonatomic, readonly) NSString *type;
@property (retain, nonatomic, readonly) NSString *payloadDescription;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic, readonly) NSString *organization;
@property (retain, nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) long long version;
@property (retain, nonatomic) NSString *persistentResourceID;
@property (nonatomic, readonly) NSDictionary *restrictions;
@property (nonatomic) _Bool mustInstallNonInteractively;
@property (nonatomic, readonly) _Bool containsSensitiveUserInformation;
@property (retain, nonatomic, readonly) NSArray *installationWarnings;

+ (id)badFieldTypeErrorWithField:(id)arg1;
+ (id)typeStrings;
+ (id)localizedSingularForm;
+ (id)localizedPluralForm;
+ (id)payloadsFromArray:(id)arg1 isStub:(_Bool)arg2 profile:(id)arg3 outError:(id *)arg4;
+ (id)localizedDescriptionForPayloadCount:(unsigned long long)arg1;
+ (id)badFieldValueErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)missingFieldErrorWithField:(id)arg1 underlyingError:(id)arg2;
+ (id)badFieldValueErrorWithField:(id)arg1;
+ (id)conflictingFieldValueErrorWithUnderlyingError:(id)arg1;
+ (id)wrapperPayloadDictionary;
+ (id)localizedParenthesizedFormDescriptionForPayloadCount:(unsigned long long)arg1;
+ (id)unavailableSystemPayloadsInEphemeralMultiUser;
+ (id)unavailableUserPayloadsInEphemeralMultiUser;
+ (id)payloadFromDictionary:(id)arg1 isStub:(_Bool)arg2 profile:(id)arg3 outError:(id *)arg4;
+ (id)availablePayloadsForUserEnrollment;
+ (id)unavailablePayloadsInEphemeralMultiUser;
+ (id)minimumWatchVersionRequirementsForPayloads;
+ (id)applicablePayloadsForHomePod;
+ (id)mdmAdoptablePayloads;
+ (id)cellularRequiredPayloads;
+ (id)supervisedRequiredPayloads;

- (id)description;
- (id)title;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)malformedPayloadErrorWithError:(id)arg1;
- (id)stubDictionary;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)filterForUserEnrollmentOutError:(id *)arg1;
- (id)subtitle2Label;
- (id)subtitle2Description;

@end
