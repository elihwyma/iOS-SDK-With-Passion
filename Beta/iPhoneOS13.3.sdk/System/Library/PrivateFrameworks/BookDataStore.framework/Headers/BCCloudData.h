/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <CoreData/NSManagedObject.h>

#import <BookDataStore/Swift-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;

@protocol BCCloudDataPrivacyDelegate;

@interface BCCloudData : NSManagedObject <Swift>

{
    id <BCCloudDataPrivacyDelegate> _privacyDelegate;
}

@property (copy, nonatomic) NSString *saltedHashedID;
@property (nonatomic) _Bool deletedFlag;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) long long editGeneration;
@property (nonatomic) long long syncGeneration;
@property (copy, nonatomic) CKRecord *systemFields;
@property (copy, nonatomic) NSData *ckSystemFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <BCCloudDataPrivacyDelegate> privacyDelegate;

+ (id)localIdentifierFromRecord:(id)arg1;
+ (id)propertyIDKey;

- (id)mutableCopy;
- (id)identifier;
- (id)recordType;
- (id)zoneName;
- (void)incrementEditGeneration;
- (_Bool)isEqualExceptForDate:(id)arg1;
- (void)configureFromCloudData:(id)arg1 withMergers:(id)arg2;
- (void)resolveConflictsFromRecord:(id)arg1 withResolvers:(id)arg2;
- (id)configuredRecordFromAttributes;

@end
