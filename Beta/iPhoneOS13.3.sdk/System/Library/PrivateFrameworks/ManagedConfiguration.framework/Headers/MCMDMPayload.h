/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPayload.h>

@class NSArray, NSData, NSNumber, NSString;

@interface MCMDMPayload : MCPayload

{
    _Bool _useDevelopmentAPNS;
    _Bool _signMessage;
    _Bool _checkOutWhenRemoved;
    int _accessRights;
    NSString *_identityUUID;
    NSData *_identityPersistentID;
    NSString *_topic;
    NSString *_serverURLString;
    NSString *_checkInURLString;
    NSArray *_serverCapabilities;
    NSString *_managedAppleID;
    NSString *_personaID;
    NSString *_enrollmentID;
    NSString *_iCloudEnrollmentID;
    NSString *_easEnrollmentID;
    NSNumber *_useDevelopmentAPNSNum;
    NSNumber *_signMessageNum;
    NSNumber *_checkOutWhenRemovedNum;
}

@property (nonatomic, readonly) NSNumber *useDevelopmentAPNSNum;
@property (nonatomic, readonly) NSNumber *signMessageNum;
@property (nonatomic, readonly) NSNumber *checkOutWhenRemovedNum;
@property (retain, nonatomic, readonly) NSString *identityUUID;
@property (retain, nonatomic) NSData *identityPersistentID;
@property (retain, nonatomic, readonly) NSString *topic;
@property (retain, nonatomic, readonly) NSString *serverURLString;
@property (nonatomic, readonly) _Bool useDevelopmentAPNS;
@property (retain, nonatomic, readonly) NSString *checkInURLString;
@property (nonatomic, readonly) int accessRights;
@property (retain, nonatomic, readonly) NSArray *localizedAccessRightDescriptions;
@property (nonatomic, readonly) _Bool signMessage;
@property (nonatomic, readonly) _Bool checkOutWhenRemoved;
@property (nonatomic, readonly) NSArray *serverCapabilities;
@property (retain, nonatomic, readonly) NSString *managedAppleID;
@property (retain, nonatomic, readonly) NSString *managedAppleIDName;
@property (nonatomic, readonly) _Bool isUserEnrollment;
@property (retain, nonatomic) NSString *personaID;
@property (retain, nonatomic) NSString *enrollmentID;
@property (retain, nonatomic) NSString *iCloudEnrollmentID;
@property (retain, nonatomic) NSString *easEnrollmentID;

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
- (id)installationWarnings;
- (id)_invalidRightsError;
- (id)_invalidTopicError;
- (id)_nonHTTPSURLErrorForField:(id)arg1;

@end
