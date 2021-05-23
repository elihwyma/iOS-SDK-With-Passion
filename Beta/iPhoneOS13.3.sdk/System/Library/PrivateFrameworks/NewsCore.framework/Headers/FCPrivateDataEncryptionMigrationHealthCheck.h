/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKContainer, FCCKPrivateDatabaseSchema, NSString;

@interface FCPrivateDataEncryptionMigrationHealthCheck : NSObject

{
    FCCKPrivateDatabaseSchema *_schema;
    CKContainer *_container;
    CKContainer *_containerWithZoneWidePCS;
    CKContainer *_secureContainer;
}

@property (retain, nonatomic) FCCKPrivateDatabaseSchema *schema;
@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKContainer *containerWithZoneWidePCS;
@property (retain, nonatomic) CKContainer *secureContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)run;

- (id)init;
- (void)run;
- (void)_eraseAllPrivateData;
- (id)_prepareHistoryAndReturnExpectations;
- (id)_prepareIssueHistoryAndReturnExpectations;
- (id)_prepareReadingListAndReturnExpectations;
- (id)_prepareSubscriptionsAndReturnExpectations;
- (id)_prepareSensitiveSubscriptionsAndReturnExpectations;
- (id)_prepareUserInfoAndReturnExpectations;
- (id)_prepareTagSettingsAndReturnExpectations;
- (id)_preparePersonalizationProfileAndReturnExpectations;
- (id)_prepareReferenceToChannelMembershipsAndReturnExpectations;
- (id)_prepareSentinelsAndReturnExpectations;
- (void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
