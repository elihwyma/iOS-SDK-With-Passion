/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/BCCloudData.h>

@class CKRecord, NSData, NSDate, NSString;

@protocol BCCloudDataPrivacyDelegate;

@interface BCCollectionMember : BCCloudData

@property (copy, nonatomic) NSString *collectionMemberID;
@property (nonatomic) int sortOrder;
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

+ (id)propertyIDKey;
+ (id)collectionMemberIDWithCollectionID:(id)arg1 assetID:(id)arg2;
+ (id)assetIDFromCollectionMemberID:(id)arg1;
+ (id)collectionIDFromCollectionMemberID:(id)arg1;

- (id)mutableCopy;
- (id)identifier;
- (id)recordType;
- (id)zoneName;
- (_Bool)isEqualExceptForDate:(id)arg1;
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;
- (void)_configureFromCollectionMember:(id)arg1 withMergers:(id)arg2;

@end
