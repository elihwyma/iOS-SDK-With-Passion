/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol PXDisplayAsset;

@interface PXConcatenatingDisplayAssetFetchResult : NSObject

{
    NSArray *_fetchResults;
    long long *_startIndexes;
    long long _subFetchResultsCount;
    long long _count;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) id <PXDisplayAsset> firstObject;

- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;
- (id)initWithFetchResults:(id)arg1;
- (id)_subFetchResultForIndex:(long long)arg1 localIndex:(long long *)arg2;

@end
