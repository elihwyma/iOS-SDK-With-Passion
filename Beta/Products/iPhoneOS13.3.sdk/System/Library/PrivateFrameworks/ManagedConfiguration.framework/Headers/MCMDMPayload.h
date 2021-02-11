/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCMDMPayload : MCPayload {
    int  _accessRights;
    NSString * _checkInURLString;
    bool  _checkOutWhenRemoved;
    NSNumber * _checkOutWhenRemovedNum;
    NSString * _easEnrollmentID;
    NSString * _enrollmentID;
    NSString * _iCloudEnrollmentID;
    NSData * _identityPersistentID;
    NSString * _identityUUID;
    NSString * _managedAppleID;
    NSString * _personaID;
    NSArray * _serverCapabilities;
    NSString * _serverURLString;
    bool  _signMessage;
    NSNumber * _signMessageNum;
    NSString * _topic;
    bool  _useDevelopmentAPNS;
    NSNumber * _useDevelopmentAPNSNum;
}

@property (nonatomic, readonly) int accessRights;
@property (nonatomic, readonly, retain) NSString *checkInURLString;
@property (nonatomic, readonly) bool checkOutWhenRemoved;
@property (nonatomic, readonly) NSNumber *checkOutWhenRemovedNum;
@property (nonatomic, retain) NSString *easEnrollmentID;
@property (nonatomic, retain) NSString *enrollmentID;
@property (nonatomic, retain) NSString *iCloudEnrollmentID;
@property (nonatomic, retain) NSData *identityPersistentID;
@property (nonatomic, readonly, retain) NSString *identityUUID;
@property (nonatomic, readonly) bool isUserEnrollment;
@property (nonatomic, readonly, retain) NSArray *localizedAccessRightDescriptions;
@property (nonatomic, readonly, retain) NSString *managedAppleID;
@property (nonatomic, readonly, retain) NSString *managedAppleIDName;
@property (nonatomic, retain) NSString *personaID;
@property (nonatomic, readonly) NSArray *serverCapabilities;
@property (nonatomic, readonly, retain) NSString *serverURLString;
@property (nonatomic, readonly) bool signMessage;
@property (nonatomic, readonly) NSNumber *signMessageNum;
@property (nonatomic, readonly, retain) NSString *topic;
@property (nonatomic, readonly) bool useDevelopmentAPNS;
@property (nonatomic, readonly) NSNumber *useDevelopmentAPNSNum;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)_invalidRightsError;
- (id)_invalidTopicError;
- (id)_nonHTTPSURLErrorForField:(id)arg1;
- (int)accessRights;
- (id)checkInURLString;
- (bool)checkOutWhenRemoved;
- (id)checkOutWhenRemovedNum;
- (id)description;
- (id)easEnrollmentID;
- (id)enrollmentID;
- (id)iCloudEnrollmentID;
- (id)identityPersistentID;
- (id)identityUUID;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (bool)isUserEnrollment;
- (id)localizedAccessRightDescriptions;
- (id)managedAppleID;
- (id)managedAppleIDName;
- (id)payloadDescriptionKeyValueSections;
- (id)personaID;
- (id)serverCapabilities;
- (id)serverURLString;
- (void)setEasEnrollmentID:(id)arg1;
- (void)setEnrollmentID:(id)arg1;
- (void)setICloudEnrollmentID:(id)arg1;
- (void)setIdentityPersistentID:(id)arg1;
- (void)setPersonaID:(id)arg1;
- (bool)signMessage;
- (id)signMessageNum;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
- (id)topic;
- (bool)useDevelopmentAPNS;
- (id)useDevelopmentAPNSNum;

@end