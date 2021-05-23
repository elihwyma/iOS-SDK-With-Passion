/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface CRKEDUPayload : NSObject

{
    _Bool _screenObservationPermissionModificationAllowed;
    NSString *_payloadDisplayName;
    NSString *_payloadDescriptionName;
    NSString *_organizationUUID;
    NSString *_organizationName;
    NSString *_payloadCertificateUUID;
    NSData *_payloadCertificatePersistentID;
    NSArray *_leaderPayloadCertificateAnchorUUID;
    NSArray *_leaderPayloadCertificateAnchorPersistentID;
    NSArray *_memberPayloadCertificateAnchorUUID;
    NSArray *_memberPayloadCertificateAnchorPersistentID;
    NSString *_resourcePayloadCertificateUUID;
    NSData *_resourcePayloadCertificatePersistentID;
    NSString *_userIdentifier;
    NSArray *_departments;
    NSArray *_groups;
    NSArray *_users;
    NSArray *_deviceGroups;
}

@property (retain, nonatomic) NSString *payloadDisplayName;
@property (retain, nonatomic) NSString *payloadDescriptionName;
@property (retain, nonatomic) NSString *organizationUUID;
@property (retain, nonatomic) NSString *organizationName;
@property (retain, nonatomic) NSString *payloadCertificateUUID;
@property (retain, nonatomic) NSData *payloadCertificatePersistentID;
@property (retain, nonatomic) NSArray *leaderPayloadCertificateAnchorUUID;
@property (retain, nonatomic) NSArray *leaderPayloadCertificateAnchorPersistentID;
@property (retain, nonatomic) NSArray *memberPayloadCertificateAnchorUUID;
@property (retain, nonatomic) NSArray *memberPayloadCertificateAnchorPersistentID;
@property (retain, nonatomic) NSString *resourcePayloadCertificateUUID;
@property (retain, nonatomic) NSData *resourcePayloadCertificatePersistentID;
@property (retain, nonatomic) NSString *userIdentifier;
@property (nonatomic) _Bool screenObservationPermissionModificationAllowed;
@property (retain, nonatomic) NSArray *departments;
@property (retain, nonatomic) NSArray *groups;
@property (retain, nonatomic) NSArray *users;
@property (retain, nonatomic) NSArray *deviceGroups;
@property (copy, nonatomic, readonly) NSDictionary *configuration;

- (id)description;
- (id)initWithDictionary:(id)arg1 isStub:(_Bool)arg2 error:(id *)arg3;
- (_Bool)parseDictionary:(id)arg1 isStub:(_Bool)arg2 outError:(id *)arg3;
- (id)parseDepartmentFromDictionary:(id)arg1 isStub:(_Bool)arg2 outError:(id *)arg3;
- (id)parseGroupFromDictionary:(id)arg1 isStub:(_Bool)arg2 outError:(id *)arg3;
- (id)parseUserFromDictionary:(id)arg1 isStub:(_Bool)arg2 outError:(id *)arg3;
- (id)parseDeviceGroupFromDictionary:(id)arg1 isStub:(_Bool)arg2 outError:(id *)arg3;

@end
