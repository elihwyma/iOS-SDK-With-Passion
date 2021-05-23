/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSHashTable, NSURL, PUImageRequesterChange, PUMediaProvider, UIImage;

@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUImageRequester : NSObject

{
    _Bool _shouldRequestPenultimateVersion;
    _Bool _networkAccessAllowed;
    _Bool _imageIsFullQuality;
    _Bool _imageIsPlaceholder;
    _Bool __needsUpdate;
    _Bool __hasRequestedFullsizeImageData;
    _Bool __hasCurrentIncompleteRequest;
    _Bool __shouldUpdateImageOnCurrentRequestCompletion;
    int __currentFullsizeImageDataRequestID;
    int __currentImageRequestID;
    PUMediaProvider *_mediaProvider;
    id <PUDisplayAsset> _asset;
    NSArray *_requestFullSizeImageDataUTTypes;
    UIImage *_image;
    NSData *_fullsizeImageData;
    NSURL *_fullsizeImageURL;
    NSHashTable *__observers;
    long long __changeCount;
    PUImageRequesterChange *__currentChange;
    struct CGSize _targetSize;
    struct CGSize __lastRequestedImageSize;
}

@property (retain, nonatomic, setter=_setImage:) UIImage *image;
@property (retain, nonatomic, setter=_setFullsizeImageData:) NSData *fullsizeImageData;
@property (retain, nonatomic, setter=_setFullsizeImageURL:) NSURL *fullsizeImageURL;
@property (nonatomic, setter=_setImageIsPlaceholder:) _Bool imageIsPlaceholder;
@property (nonatomic, setter=_setImageIsFullQuality:) _Bool imageIsFullQuality;
@property (retain, nonatomic, setter=_setObserver:) NSHashTable *_observers;
@property (nonatomic, setter=_setChangeCount:) long long _changeCount;
@property (retain, nonatomic, setter=_setCurrentChange:) PUImageRequesterChange *_currentChange;
@property (nonatomic, setter=_setNeedsUpdate:) _Bool _needsUpdate;
@property (nonatomic, setter=_setHasRequestedFullsizeImageData:) _Bool _hasRequestedFullsizeImageData;
@property (nonatomic, setter=_setCurrentFullsizeImageDataRequestID:) int _currentFullsizeImageDataRequestID;
@property (nonatomic, setter=_setCurrentIncompleteRequest:) _Bool _hasCurrentIncompleteRequest;
@property (nonatomic, setter=_setLastRequestedImageSize:) struct CGSize _lastRequestedImageSize;
@property (nonatomic, setter=_setCurrentImageRequestID:) int _currentImageRequestID;
@property (nonatomic, setter=_setShouldUpdateImageOnCurrentRequestCompletion:) _Bool _shouldUpdateImageOnCurrentRequestCompletion;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (nonatomic, readonly) id <PUDisplayAsset> asset;
@property (nonatomic) struct CGSize targetSize;
@property (nonatomic) _Bool shouldRequestPenultimateVersion;
@property (retain, nonatomic) NSArray *requestFullSizeImageDataUTTypes;
@property (nonatomic, getter=isNetworkAccessAllowed) _Bool networkAccessAllowed;

- (id)init;
- (void)_update;
- (void)_willChange;
- (void)setAsset:(id)arg1;
- (void)_didChange;
- (void)updateIfNeeded;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)_publishChange:(id)arg1;
- (void)handlePreloadedImage:(id)arg1;
- (id)initWithMediaProvider:(id)arg1 asset:(id)arg2;
- (void)_invalidateImageRequest;
- (void)_assertInsideChangesBlock;
- (void)cancelAllImageRequests;
- (void)_handleResultOfImageRequestWithID:(int)arg1 image:(id)arg2 info:(id)arg3;
- (void)_handleResultOfFullsizeImageDataRequestWithID:(int)arg1 imageData:(id)arg2 imageURL:(id)arg3 dataUTI:(id)arg4 orientation:(long long)arg5 info:(id)arg6;

@end
