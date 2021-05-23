/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PHAssetCollection, PHFetchResult, PHObject;

@protocol PXRelatedEntry <Swift>

@property (nonatomic, readonly, getter=isPlaceholder) _Bool placeholder;
@property (nonatomic, readonly) PHFetchResult *relatedKeyAssetFetchResult;
@property (nonatomic, readonly) NSString *relatedLocalizedTitle;
@property (nonatomic, readonly) NSString *relatedLocalizedSubtitle;
@property (nonatomic, readonly) PHAssetCollection *relatedAssetCollection;
@property (nonatomic, readonly) PHObject *relatedReferenceObject;
@property (nonatomic, readonly) NSString *relatedTitleFontName;

@end
