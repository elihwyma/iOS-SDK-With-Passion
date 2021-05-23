/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

#import <BookDataStore/Swift-Protocol.h>

@class CKRecord, NSData, NSDate, NSString;

@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableCloudData : NSObject <Swift>

{
    _Bool _deletedFlag;
    long long _editGeneration;
    long long _syncGeneration;
    NSDate *_modificationDate;
    CKRecord *_systemFields;
    id <BCCloudDataPrivacyDelegate> _privacyDelegate;
    NSString *_localRecordID;
}

@property (nonatomic) _Bool deletedFlag;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) long long editGeneration;
@property (nonatomic) long long syncGeneration;
@property (copy, nonatomic) NSString *localRecordID;
@property (copy, nonatomic) CKRecord *systemFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSData *ckSystemFields;
@property (weak, nonatomic) id <BCCloudDataPrivacyDelegate> privacyDelegate;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (id)recordType;
- (id)zoneName;
- (id)initWithRecord:(id)arg1;
- (id)initWithCloudData:(id)arg1;
- (void)incrementEditGeneration;
- (id)configuredRecordFromAttributes;

@end
