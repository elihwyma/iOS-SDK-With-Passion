/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo

{
    _Bool _atomic;
    _Bool _shouldOnlySaveAssetContent;
    _Bool _shouldReportRecordsInFlight;
    _Bool _originatingFromDaemon;
    _Bool _markAsParticipantNeedsNewInvitationToken;
    _Bool _shouldSkipPCSRetryBehavior;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    NSData *_clientChangeTokenData;
    long long _savePolicy;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSDictionary *_pluginFieldsForRecordDeletesByID;
    NSDictionary *_assetUUIDToExpectedProperties;
    NSDictionary *_packageUUIDToExpectedProperties;
}

@property (retain, nonatomic) NSArray *recordsToSave;
@property (retain, nonatomic) NSArray *recordIDsToDelete;
@property (retain, nonatomic) NSData *clientChangeTokenData;
@property (nonatomic) _Bool atomic;
@property (nonatomic) long long savePolicy;
@property (nonatomic) _Bool shouldOnlySaveAssetContent;
@property (copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID;
@property (copy, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID;
@property (nonatomic) _Bool shouldReportRecordsInFlight;
@property (copy, nonatomic) NSDictionary *assetUUIDToExpectedProperties;
@property (copy, nonatomic) NSDictionary *packageUUIDToExpectedProperties;
@property (nonatomic) _Bool originatingFromDaemon;
@property (nonatomic) _Bool markAsParticipantNeedsNewInvitationToken;
@property (nonatomic) _Bool shouldSkipPCSRetryBehavior;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
