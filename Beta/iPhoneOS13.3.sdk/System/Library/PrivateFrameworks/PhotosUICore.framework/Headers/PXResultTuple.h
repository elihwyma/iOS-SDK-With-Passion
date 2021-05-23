/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PHFetchResult;

@interface PXResultTuple : NSObject

{
    _Bool _fetchedWithReverseSortOrder;
    PHFetchResult *_fetchResult;
    PHFetchResult *_curatedFetchResult;
    PHFetchResult *_keyAssetsFetchResult;
}

@property (nonatomic, readonly) PHFetchResult *fetchResult;
@property (nonatomic, readonly) _Bool fetchedWithReverseSortOrder;
@property (nonatomic, readonly) PHFetchResult *curatedFetchResult;
@property (nonatomic, readonly) PHFetchResult *keyAssetsFetchResult;

- (id)description;
- (id)resultTupleUpdatedWithChange:(id)arg1;
- (id)initWithFetchResult:(id)arg1 fetchedWithReverseSortOrder:(_Bool)arg2 curatedFetchResult:(id)arg3 keyAssetsFetchResult:(id)arg4;

@end
