/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString;

@interface CRKCloudLocalDelta : NSObject

{
    _Bool _atomic;
    NSString *_identifier;
    NSMutableSet *_mutableAssetIdentifiers;
    NSMutableSet *_mutableCreateRecords;
    NSMutableSet *_mutableDeleteRecordIds;
    NSMutableSet *_mutableUpdateRecords;
}

@property (nonatomic, getter=isAtomic) _Bool atomic;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableSet *mutableAssetIdentifiers;
@property (retain, nonatomic) NSMutableSet *mutableCreateRecords;
@property (retain, nonatomic) NSMutableSet *mutableDeleteRecordIds;
@property (retain, nonatomic) NSMutableSet *mutableUpdateRecords;
@property (copy, nonatomic, readonly) NSSet *createRecords;
@property (copy, nonatomic, readonly) NSSet *updateRecords;
@property (copy, nonatomic, readonly) NSSet *deleteRecordIds;
@property (nonatomic, readonly) NSSet *assetIdentifiers;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (nonatomic, readonly) NSSet *createRecordIds;
@property (nonatomic, readonly) NSSet *updateRecordIds;

+ (_Bool)supportsSecureCoding;
+ (id)instanceWithCreateRecords:(id)arg1 updateRecords:(id)arg2 deleteRecordIds:(id)arg3 isAtomic:(_Bool)arg4;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addDeleteRecordId:(id)arg1;
- (void)addCreateRecord:(id)arg1;
- (void)addAssetIdentifiers:(id)arg1;
- (void)addUpdateRecord:(id)arg1;
- (void)mergeDelta:(id)arg1;
- (id)recordsInSet:(id)arg1 matchingIds:(id)arg2;
- (id)createRecordsMatchingIds:(id)arg1;
- (id)updateRecordsMatchingIds:(id)arg1;
- (void)removeCreatesMatchingIds:(id)arg1;
- (void)removeUpdatesMatchingIds:(id)arg1;
- (void)removeDeleteIdsMatchingIds:(id)arg1;
- (void)setCreateRecords:(id)arg1;
- (void)setUpdateRecords:(id)arg1;
- (void)setDeleteRecordIds:(id)arg1;

@end
