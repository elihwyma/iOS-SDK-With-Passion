/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PXDisplayAsset, PXDisplayAssetFetchResult;

@interface PXWrappingDisplayAssetFetchResult : NSObject

{
    struct _NSRange _range;
    id <PXDisplayAssetFetchResult> _displayFetchResult;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) id <PXDisplayAsset> firstObject;

- (id)objectAtIndex:(unsigned long long)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (id)thumbnailAssetAtIndex:(unsigned long long)arg1;
- (id)initWithFetchResult:(id)arg1 range:(struct _NSRange)arg2;

@end
