/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class CKContainer, MSPCloudClientRegistrationRecord, NSArray, NSDate, NSString, NSUUID;

@interface MSPCloudClientRegistration : NSObject

{
    NSString *_accountIdentifier;
    NSUUID *_clientIdentifier;
    MSPCloudClientRegistrationRecord *_clientRecord;
    NSArray *_otherClientRecords;
    unsigned long long _maxEarliestCompatibleEpoch;
    NSDate *_lastRegistrationUpdate;
    NSDate *_lastRegistrationFetch;
}

@property (retain, nonatomic) MSPCloudClientRegistrationRecord *clientRecord;
@property (retain, nonatomic) NSArray *otherClientRecords;
@property (nonatomic) unsigned long long maxEarliestCompatibleEpoch;
@property (nonatomic, readonly) CKContainer *ckContainer;
@property (retain, nonatomic) NSDate *lastRegistrationUpdate;
@property (retain, nonatomic) NSDate *lastRegistrationFetch;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSUUID *clientIdentifier;

+ (id)zoneID;

- (void)setupCloudContainerWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushClientRegistrationRecord:(id)arg1 group:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchClientRegistrationRecordsCreatingZoneIfNecessaryWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAccountIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchClientRegistrationRecordsWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithAccountIdentifier:(id)arg1 clientIdentifier:(id)arg2;
- (void)updateClientRegistrationRecordWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkClientCompatibilityWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCloudRegistrationContainerWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
