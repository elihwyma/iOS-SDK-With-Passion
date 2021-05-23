/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSDictionary, NSString, PHFetchResult, PXPhotosDataSource, PXPhotosDetailsViewModel;

@protocol PXMutablePhotosDetailsContext <Swift>

@property (retain, nonatomic) PHFetchResult *assetCollections;
@property (copy, nonatomic) NSDictionary *assetsByCollection;
@property (retain, nonatomic) PHFetchResult *people;
@property (retain, nonatomic) PHFetchResult *keyAssetsFetchResult;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedSubtitle;
@property (copy, nonatomic) NSString *titleFontName;
@property (nonatomic) _Bool shouldShowMovieHeader;
@property (nonatomic) _Bool hasLocation;
@property (nonatomic) unsigned long long viewSourceOrigin;
@property (retain, nonatomic) PXPhotosDetailsViewModel *viewModel;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;

@end
