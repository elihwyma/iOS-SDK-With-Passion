/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/BCMutableCloudData.h>

@class CKRecord, NSData, NSDate, NSString;

@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableReadingNowDetail : BCMutableCloudData

{
    _Bool _isTrackedAsRecent;
    NSString *_assetID;
    NSDate *_lastEngagedDate;
}

@property (copy, nonatomic) NSString *assetID;
@property (nonatomic) _Bool isTrackedAsRecent;
@property (copy, nonatomic) NSDate *lastEngagedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool deletedFlag;
@property (copy, nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) long long editGeneration;
@property (nonatomic, readonly) long long syncGeneration;
@property (copy, nonatomic, readonly) CKRecord *systemFields;
@property (copy, nonatomic, readonly) NSData *ckSystemFields;
@property (weak, nonatomic) id <BCCloudDataPrivacyDelegate> privacyDelegate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (id)recordType;
- (id)zoneName;
- (id)initWithRecord:(id)arg1;
- (id)initWithCloudData:(id)arg1;
- (id)configuredRecordFromAttributes;
- (id)initWithAssetID:(id)arg1;

@end
