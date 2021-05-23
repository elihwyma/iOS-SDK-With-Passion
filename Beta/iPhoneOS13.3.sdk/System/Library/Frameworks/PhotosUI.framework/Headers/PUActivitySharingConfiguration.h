/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, PHFetchResult, PHPerson, PUPhotoSelectionManager, PXPhotosDataSource;

@protocol PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUActivitySharingConfiguration : NSObject

{
    _Bool _allowAirPlayActivity;
    _Bool _wantsActionSheet;
    _Bool _excludeShareActivity;
    PHFetchResult *_collectionListFetchResult;
    PUPhotoSelectionManager *_selectionManager;
    PXPhotosDataSource *_photosDataSource;
    NSDictionary *_assetsFetchResultsByAssetCollection;
    NSArray *_activities;
    NSArray *_excludedActivityTypes;
    PHPerson *_person;
    NSString *_title;
    NSString *_subtitle;
    id <PXDisplayAsset> _keyAsset;
    unsigned long long _sourceOrigin;
}

@property (nonatomic, readonly) PHFetchResult *collectionListFetchResult;
@property (nonatomic, readonly) PUPhotoSelectionManager *selectionManager;
@property (retain, nonatomic) PXPhotosDataSource *photosDataSource;
@property (copy, nonatomic) NSDictionary *assetsFetchResultsByAssetCollection;
@property (copy, nonatomic) NSArray *activities;
@property (copy, nonatomic) NSArray *excludedActivityTypes;
@property (nonatomic) _Bool allowAirPlayActivity;
@property (retain, nonatomic) PHPerson *person;
@property (nonatomic) _Bool wantsActionSheet;
@property (nonatomic) _Bool excludeShareActivity;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) id <PXDisplayAsset> keyAsset;
@property (nonatomic) unsigned long long sourceOrigin;

- (id)initWithCollectionsFetchResult:(id)arg1 selectionManager:(id)arg2;

@end
