/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXObservable.h>

@class NSString, PHFetchResult, PUPhotoSelectionManager, PXPhotosDataSource;

@protocol PXDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUActivitySharingViewModel : PXObservable

{
    _Bool _actionSheet;
    PHFetchResult *_collectionListFetchResult;
    PXPhotosDataSource *_photosDataSource;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    id <PXDisplayAsset> _keyAsset;
    unsigned long long _sourceOrigin;
    PUPhotoSelectionManager *_selectionManager;
}

@property (retain, nonatomic) PUPhotoSelectionManager *selectionManager;
@property (nonatomic, readonly) PHFetchResult *collectionListFetchResult;
@property (nonatomic, readonly) PXPhotosDataSource *photosDataSource;
@property (nonatomic, readonly, getter=isActionSheet) _Bool actionSheet;
@property (copy, nonatomic, readonly) NSString *localizedTitle;
@property (copy, nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) id <PXDisplayAsset> keyAsset;
@property (nonatomic, readonly) unsigned long long sourceOrigin;

- (id)init;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (id)initWithActivitySharingConfiguration:(id)arg1;
- (void)setActionSheet:(_Bool)arg1;

@end
