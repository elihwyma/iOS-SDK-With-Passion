/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PHFetchResultChangeDetails, PXResultRecord;

@interface PXResultRecordChangeDetails : NSObject

{
    PXResultRecord *_resultRecordBeforeChanges;
    PXResultRecord *_resultRecordAfterChanges;
    PHFetchResultChangeDetails *_exposedFetchResultChangeDetails;
    PHFetchResultChangeDetails *_keyAssetsFetchResultChangeDetails;
}

@property (nonatomic, readonly) PXResultRecord *resultRecordBeforeChanges;
@property (nonatomic, readonly) PXResultRecord *resultRecordAfterChanges;
@property (nonatomic, readonly) PHFetchResultChangeDetails *exposedFetchResultChangeDetails;
@property (nonatomic, readonly) PHFetchResultChangeDetails *keyAssetsFetchResultChangeDetails;

+ (id)resultRecordChangeDetailsFor:(id)arg1 withChange:(id)arg2;

- (id)description;
- (id)initWithResultRecordBeforeChanges:(id)arg1 resultRecordAfterChanges:(id)arg2 exposedFetchResultChangeDetails:(id)arg3 keyAssetsFetchResultChangeDetails:(id)arg4;

@end
