/*
 Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

#import <MapKit/MKAnnotationView.h>

@class NSString, PKExtendedTraitCollection, PXPlacesImageCache, UIImageView, UILabel;

@interface PXPlacesMapThumbnailAnnotationView : MKAnnotationView

{
    long long _geotaggablesCount;
    _Bool _imageIsPlaceholder;
    CDUnknownBlockType _displayCompletion;
    PKExtendedTraitCollection *_extendedTraitCollection;
    id _extendedTraitObserver;
    UILabel *_countLabel;
    UIImageView *_countLabelBackgroundImageView;
    PXPlacesImageCache *_imageCache;
}

@property (retain, nonatomic) PKExtendedTraitCollection *extendedTraitCollection;
@property (retain, nonatomic) id extendedTraitObserver;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *countLabelBackgroundImageView;
@property (retain, nonatomic) PXPlacesImageCache *imageCache;
@property (nonatomic) _Bool imageIsPlaceholder;
@property (copy, nonatomic) CDUnknownBlockType displayCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_thumbnailCreationOperationQueue;
+ (id)_thumbnailFetchOperationQueue;

- (void)dealloc;
- (void)prepareForReuse;
- (void)setImage:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setAnnotation:(id)arg1;
- (void)_updatePlaceholderImageIfNeeded;
- (id)renderToImage;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 extendedTraitCollection:(id)arg3 imageCache:(id)arg4;
- (id)primaryGeotaggable;
- (id)userCacheKey;
- (id)_countLabelBackgroundColor;
- (void)_reloadData:(_Bool)arg1;
- (void)_fetchImageWithNetworkAccessAllowed:(_Bool)arg1;
- (void)_processPlaceHolderForGeotaggable:(id)arg1;
- (void)_processGeotaggable:(id)arg1 withImage:(struct CGImage *)arg2 popoverImageType:(unsigned long long)arg3 shouldCache:(_Bool)arg4;
- (void)_processPostImage;
- (void)_reloadCount:(long long)arg1;
- (void)_showCountLabel;
- (void)_hideCountLabel;

@end
