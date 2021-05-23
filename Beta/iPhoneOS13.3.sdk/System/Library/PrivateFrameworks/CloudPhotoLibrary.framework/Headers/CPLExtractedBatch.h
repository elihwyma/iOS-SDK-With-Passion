/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLChangeBatch, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface CPLExtractedBatch : NSObject

{
    NSDictionary *_uploadIdentifiers;
    NSMutableDictionary *_mutableUploadIdentifiers;
    NSSet *_untrustableScopedIdentifiers;
    NSMutableSet *_mutableUntrustableScopedIndentifiers;
    _Bool _resourceSizeIsCalculated;
    unsigned long long _resourceSize;
    _Bool _full;
    _Bool _batchCanLowerQuota;
    CPLChangeBatch *_batch;
    NSString *_clientCacheIdentifier;
}

@property (nonatomic, readonly) CPLChangeBatch *batch;
@property (nonatomic, readonly) unsigned long long resourceSize;
@property (nonatomic, getter=isFull) _Bool full;
@property (nonatomic, readonly) _Bool batchCanLowerQuota;
@property (copy, nonatomic) NSString *clientCacheIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uploadIdentifiers;
- (unsigned long long)effectiveResourceSizeToUploadUsingStorage:(id)arg1;
- (id)uploadIdentifierForChange:(id)arg1;
- (void)addChange:(id)arg1 fromStorage:(id)arg2;
- (void)forceScopeIndexOnAllRecordsTo:(long long)arg1;

@end
