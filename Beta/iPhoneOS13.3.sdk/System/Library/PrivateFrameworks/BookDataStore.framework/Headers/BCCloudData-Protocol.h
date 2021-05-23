/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@class CKRecord, NSData, NSDate;

@protocol BCCloudDataPrivacyDelegate;

@protocol BCCloudData <Swift>

@property (nonatomic, readonly) _Bool deletedFlag;
@property (copy, nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) long long editGeneration;
@property (nonatomic, readonly) long long syncGeneration;
@property (copy, nonatomic, readonly) CKRecord *systemFields;
@property (copy, nonatomic, readonly) NSData *ckSystemFields;
@property (weak, nonatomic) id <BCCloudDataPrivacyDelegate> privacyDelegate;

- (unsigned short)identifier;
- (unsigned short)recordType;
- (unsigned short)zoneName;
- (unsigned short)incrementEditGeneration;

@end
