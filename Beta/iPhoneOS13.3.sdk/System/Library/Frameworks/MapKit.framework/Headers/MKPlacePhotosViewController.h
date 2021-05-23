/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIViewController.h>

#import <MapKit/Swift-Protocol.h>

@class MKMapItem, MKMuninContainerView, MKMuninView, MKPhotoSmallAttributionView, MKPlaceAttributionCell, MKPlacePhotosView, NSArray, NSLayoutConstraint, NSString, UIScrollView, UIView, _MKPlaceViewController;

@protocol MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate;

@interface MKPlacePhotosViewController : UIViewController <Swift>

{
    MKPlacePhotosView *_currentPhotoViewer;
    UIView *_bottomHairline;
    NSArray *_photoViews;
    UIScrollView *_photosContainerScrollView;
    UIView *_photosContainer;
    MKPhotoSmallAttributionView *_photosSmallAttributionsView;
    double _lastPhotoScrollOffset;
    _Bool _photoScrollViewScrollingLeft;
    _Bool _photoScrollViewScrollingRight;
    _Bool _canUseFullscreenViewer;
    _Bool _canUseGallery;
    _Bool _photoLoaded;
    _Bool _loadAppImageCanceledOrFailed;
    _Bool _isRTL;
    unsigned long long _photosCount;
    UIView *_externalView;
    MKMapItem *_mapItem;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSArray *_photos;
    unsigned long long _mode;
    unsigned long long _originalMode;
    unsigned long long _options;
    MKPlaceAttributionCell *_attributionCell;
    MKMuninContainerView *_muninContainerView;
    UIScrollView *_parentScrollView;
    _Bool _showsBottomHairline;
    _MKPlaceViewController *_owner;
    id <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> _photosControllerDelegate;
}

@property (weak, nonatomic) _MKPlaceViewController *owner;
@property (weak, nonatomic) id <MKPlaceCardPhotosControllerDelegate><MKPlaceCardActionControllerDelegate> photosControllerDelegate;
@property (nonatomic) _Bool showsBottomHairline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MKMuninView *muninView;

- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewLayoutMarginsDidChange;
- (void)infoCardThemeChanged;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (id)attributionString;
- (void)setContentVisibility:(long long)arg1;
- (id)initWithMapItem:(id)arg1 mode:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2;
- (id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)placePhotoViewerWillClose:(id)arg1 photo:(id)arg2 onIndex:(unsigned long long)arg3;
- (void)openURL;
- (void)_photoSelected:(id)arg1;
- (void)_createImageViews;
- (void)updateBottomHairlineVisibility;
- (void)_didBecomeActive:(id)arg1;
- (void)_willResignActive:(id)arg1;
- (void)_catchScrollNotification:(id)arg1;
- (void)_loadPhotos;
- (void)_cancelLoadPhotos;
- (void)updateAttributionCell;
- (id)formattedAttributionString;
- (void)addAttributionCell;
- (void)_updatePhotoBackgroundColor:(id)arg1;
- (void)layoutImages;
- (void)_applyCornerRadius;
- (struct CGSize)sizeForIndex:(unsigned long long)arg1;
- (void)updateAttributionPositionWithOffset:(double)arg1;
- (void)_updateAlphaAttribution;
- (void)_photoTappedAtIndex:(unsigned long long)arg1;
- (void)_callPhotoDelegateForPhotoAt:(unsigned long long)arg1;
- (void)muninContainerView:(id)arg1 didAddMuninView:(id)arg2;

@end
