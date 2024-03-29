/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/BCCloudData.h>

@class CKRecord, NSData, NSDate, NSString;

@protocol BCCloudDataPrivacyDelegate;

@interface BCAssetAnnotations : BCCloudData

@property (copy, nonatomic) NSString *assetID;
@property (copy, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSData *bookAnnotations;
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

- (id)mutableCopy;
- (id)identifier;
- (id)recordType;
- (id)zoneName;
- (_Bool)isEqualExceptForDate:(id)arg1;
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;
- (void)_configureFromAssetAnnotations:(id)arg1 withMergers:(id)arg2;
- (void)_mergeInAssetID:(id)arg1 assetVersion:(id)arg2 serializedData:(id)arg3;

@end
