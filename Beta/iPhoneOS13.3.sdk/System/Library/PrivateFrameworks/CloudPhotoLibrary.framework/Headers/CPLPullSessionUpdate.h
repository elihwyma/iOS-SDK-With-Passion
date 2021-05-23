/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch;

@interface CPLPullSessionUpdate : CPLChangeSessionUpdate

{
    CPLChangeBatch *_clientBatch;
    CPLChangeBatch *_cloudBatch;
}

@property (nonatomic, readonly) CPLChangeBatch *clientBatch;
@property (nonatomic, readonly) CPLChangeBatch *cloudBatch;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)statusDescription;
- (_Bool)applyToStore:(id)arg1 error:(id *)arg2;
- (_Bool)discardFromStore:(id)arg1 error:(id *)arg2;
- (id)storageForStatusInStore:(id)arg1;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1;
- (id)initWithStore:(id)arg1 expandedClientBatch:(id)arg2 expandedCloudBatch:(id)arg3;

@end
