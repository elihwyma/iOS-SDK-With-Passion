/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIViewController.h>

#import <MapKit/Swift-Protocol.h>

@class GEOMapItemAttribution, NSString, UIScrollView, UIStackView;

@protocol GEOPictureItemContainer, MKPictureItemContainerAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKPictureItemContainerViewController : UIViewController <Swift>

{
    id <MKPictureItemContainerAnalyticsDelegate> _analyticsDelegate;
    id <GEOPictureItemContainer> _pictureItemContainer;
    GEOMapItemAttribution *_attribution;
    UIScrollView *_scrollView;
    UIStackView *_stackView;
    struct CGPoint _beginAnalyticsScrollingPoint;
}

@property (nonatomic, readonly) id <GEOPictureItemContainer> pictureItemContainer;
@property (nonatomic, readonly) GEOMapItemAttribution *attribution;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) struct CGPoint beginAnalyticsScrollingPoint;
@property (weak, nonatomic) id <MKPictureItemContainerAnalyticsDelegate> analyticsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)infoCardThemeChanged;
- (void)placePhotoViewerAttributionTappedForPhotoAtIndex:(unsigned long long)arg1 photo:(id)arg2;
- (id)placePhotoViewerViewForPhotoAtIndex:(unsigned long long)arg1;
- (void)updateUIForTheme:(id)arg1;
- (void)didTapOnPictureItemView:(id)arg1;
- (void)downloadImageForVisiblePictureItemViews;
- (id)visiblePictureItemViews;
- (id)initWithPictureItemContainer:(id)arg1 attribution:(id)arg2;

@end
