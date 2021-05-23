/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CPLChangeBatch : NSObject

{
    NSMutableArray *_records;
    NSMutableDictionary *_additionalRecords;
    NSMutableDictionary *_localResources;
    _Bool _calculateEstimatedBatchSize;
    unsigned long long _estimatedBatchSize;
}

@property (nonatomic, readonly) NSArray *records;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)redactedDescription;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addRecord:(id)arg1;
- (void)removeRecordWithScopedIdentifier:(id)arg1;
- (id)additionalRecordWithScopedIdentifier:(id)arg1;
- (id)summaryDescription;
- (id)initWithRecords:(id)arg1;
- (id)_additionalRecords;
- (unsigned long long)estimatedBatchSize;
- (id)cplFullDescription;
- (void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerScopedIdentifier:(id)arg3 changesPerClass:(id)arg4;
- (_Bool)sortBatchWithError:(id *)arg1;
- (void)extractInitialDownloadBatch:(id *)arg1 shouldConsiderRecordFilter:(CDUnknownBlockType)arg2;
- (id)recordWithScopedIdentifier:(id)arg1;
- (id)_initWithRecords:(id)arg1;
- (void)addRecordsFromBatch:(id)arg1;
- (void)removeRecordWithIdentifier:(id)arg1;
- (_Bool)hasChangeWithScopedIdentifier:(id)arg1;
- (_Bool)hasChangeWithIdentifier:(id)arg1;
- (id)additionalRecordWithIdentifier:(id)arg1;
- (void)_setAdditionalRecords:(id)arg1;
- (void)_addAdditionalRecord:(id)arg1;
- (void)_setRecords:(id)arg1;
- (id)localResourceOfType:(unsigned long long)arg1 forItemWithCloudScopedIdentifier:(id)arg2;
- (void)appendLocalResources:(id)arg1 forItemWithCloudScopedIdentifier:(id)arg2;
- (id)_descriptionRedacted:(_Bool)arg1;

@end
