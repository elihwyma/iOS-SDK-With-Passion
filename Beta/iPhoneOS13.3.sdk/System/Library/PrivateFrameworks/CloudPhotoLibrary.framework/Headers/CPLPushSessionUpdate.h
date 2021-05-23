/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch, NSArray, NSDictionary, NSSet;

@interface CPLPushSessionUpdate : CPLChangeSessionUpdate

{
    CPLChangeBatch *_diffBatch;
    NSDictionary *_uploadIdentifiers;
    NSArray *_addedRecords;
    NSArray *_updatedRecords;
    NSArray *_deletedRecordScopedIdentifiers;
    NSSet *_unquarantinedRecordScopedIdentifiers;
}

@property (nonatomic, readonly) CPLChangeBatch *diffBatch;
@property (nonatomic, readonly) NSDictionary *uploadIdentifiers;
@property (nonatomic, readonly) NSArray *addedRecords;
@property (nonatomic, readonly) NSArray *updatedRecords;
@property (nonatomic, readonly) NSArray *deletedRecordScopedIdentifiers;
@property (nonatomic, readonly) NSSet *unquarantinedRecordScopedIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)statusDescription;
- (_Bool)applyToStore:(id)arg1 error:(id *)arg2;
- (_Bool)discardFromStore:(id)arg1 error:(id *)arg2;
- (id)storageForStatusInStore:(id)arg1;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1;
- (id)initWithPushSessionTracker:(id)arg1 error:(id *)arg2;

@end
