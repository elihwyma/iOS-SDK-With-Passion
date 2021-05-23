/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PHAssetCollection, PHFetchResult, PHObject;

@interface PXRelatedEntry : NSObject

{
    NSString *_relatedTitleFontName;
    PHAssetCollection *_assetCollection;
    PHFetchResult *_keyAssetFetchResult;
    PHObject *_referenceObject;
    NSString *_relatedLocalizedTitle;
}

@property (retain, nonatomic) NSString *relatedLocalizedTitle;
@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) PHFetchResult *keyAssetFetchResult;
@property (nonatomic, readonly) PHObject *referenceObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isPlaceholder) _Bool placeholder;
@property (nonatomic, readonly) PHFetchResult *relatedKeyAssetFetchResult;
@property (nonatomic, readonly) NSString *relatedLocalizedSubtitle;
@property (nonatomic, readonly) PHAssetCollection *relatedAssetCollection;
@property (nonatomic, readonly) PHObject *relatedReferenceObject;
@property (nonatomic, readonly) NSString *relatedTitleFontName;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAssetCollection:(id)arg1 keyAssetFetchResult:(id)arg2 referenceObject:(id)arg3;

@end
