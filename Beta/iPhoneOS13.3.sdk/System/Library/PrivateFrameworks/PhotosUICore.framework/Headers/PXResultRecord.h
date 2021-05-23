/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@interface PXResultRecord : NSObject <Swift>

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)fetchResult;
- (_Bool)isCurated;
- (_Bool)reverseSortOrder;
- (id)keyAssetsFetchResult;
- (id)exposedFetchResult;
- (id)curatedFetchResult;
- (_Bool)wantsCuration;
- (id)excludedOids;
- (id)includedOids;
- (id)curatedOids;
- (long long)keyAssetIndex;
- (id)inclusionPredicate;
- (id)filteredFetchResult;

@end
