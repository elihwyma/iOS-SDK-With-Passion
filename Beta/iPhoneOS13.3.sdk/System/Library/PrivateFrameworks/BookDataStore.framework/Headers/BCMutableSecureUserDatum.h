/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/BCMutableCloudData.h>

@class CKRecord, NSData, NSDate, NSString;

@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableSecureUserDatum : BCMutableCloudData

{
    NSString *_key;
    NSString *_value;
}

@property (copy, nonatomic) NSString *value;
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
@property (copy, nonatomic, readonly) NSString *key;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithKey:(id)arg1;
- (id)recordType;
- (id)zoneName;
- (id)initWithRecord:(id)arg1;
- (id)initWithCloudData:(id)arg1;
- (id)configuredRecordFromAttributes;

@end
