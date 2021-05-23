/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIView.h>

#import <MapKit/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIActivityIndicatorView, UILabel, UINavigationBar, UINavigationItem, UIScrollView, UIVisualEffectView;

@protocol MKPlacePhotosViewDelegate;

__attribute__((visibility("hidden")))
@interface MKPlacePhotosView : UIView <Swift>

{
    NSArray *_photos;
    NSMutableArray *_photoViews;
    UIScrollView *_scrollView;
    UILabel *_pageInfoLabel;
    UIActivityIndicatorView *_activityIndicator;
    NSMutableArray *_singlePhotoArray;
    UINavigationBar *_navBar;
    UIView *_bottomView;
    UIVisualEffectView *_bottomEffectView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_licenseLabel;
    int _actualPage;
    UINavigationItem *_navItem;
    unsigned long long _textDisplayedForPage;
    NSArray *_fontConstraints;
    id <MKPlacePhotosViewDelegate> _delegate;
}

@property (nonatomic) unsigned long long currentPage;
@property (weak, nonatomic) id <MKPlacePhotosViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)dismiss;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)contentSizeDidChange;
- (void)stopActivityIndicator;
- (void)toggleNavBar;
- (double)xPositionForPhotoAtIndex:(unsigned long long)arg1 numberOfPhotos:(unsigned long long)arg2 pageWidth:(double)arg3;
- (id)headerTitleForPage:(unsigned long long)arg1;
- (void)_backTapped;
- (void)setNavBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)photoAttributionTapped;
- (void)memoryWarning:(id)arg1;
- (void)updateTextForPage:(unsigned long long)arg1;
- (void)updateDetails;
- (unsigned long long)indexForPhotoAtXOffset:(double)arg1 pageWidth:(double)arg2 numberOfPhotos:(unsigned long long)arg3;
- (void)hideToView:(id)arg1;
- (void)startActivityIndicator;
- (id)initWithPhotos:(id)arg1;
- (void)showPhotoAt:(unsigned long long)arg1;

@end
