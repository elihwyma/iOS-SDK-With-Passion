/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <BookDataStore/Swift-Protocol.h>

@protocol BCCloudAssetDetailManager <Swift>

- (unsigned short)currentAssetDetailCloudSyncVersions: /* Error: Ran out of types for this method. */;
- (unsigned short)setAssetDetail:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setAssetDetails:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAssetDetailForAssetID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)assetDetailForAssetID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)assetDetailsForAssetIDs:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)resolvedAssetDetailForAssetID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAssetDetailsIncludingDeleted:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAssetDetailsForUnsyncedTastes: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchFinishedDatesByAssetIDForYear:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchFinishedAssetCountByYearWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getAssetDetailChangesSince:completion: /* Error: Ran out of types for this method. */;

@end
