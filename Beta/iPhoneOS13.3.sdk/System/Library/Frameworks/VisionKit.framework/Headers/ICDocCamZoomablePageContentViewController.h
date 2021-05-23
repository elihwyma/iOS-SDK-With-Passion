/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIViewController.h>

#import <VisionKit/Swift-Protocol.h>

@class NSString, UIImage, UIImageView, UIScrollView;

@protocol ICDocCamZoomablePageContentDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamZoomablePageContentViewController : UIViewController <Swift>

{
    _Bool _shouldSetupScalesInViewDidLayoutSubviews;
    id <ICDocCamZoomablePageContentDelegate> _pageContentDelegate;
    UIImage *_image;
    UIImageView *_imageView;
    unsigned long long _pageIndex;
    UIScrollView *_scrollView;
    struct CGSize _prevScrollViewSize;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) _Bool shouldSetupScalesInViewDidLayoutSubviews;
@property (nonatomic) struct CGSize prevScrollViewSize;
@property (weak, nonatomic) id <ICDocCamZoomablePageContentDelegate> pageContentDelegate;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long pageIndex;
@property (nonatomic, readonly) double zoomScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)accessibilityPerformEscape;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (void)resetZoom;
- (void)setupAccessibility;
- (void)resetImageCentering;
- (void)singleTap;
- (void)doubleTap:(id)arg1;
- (void)view:(id)arg1 setCenter:(struct CGPoint)arg2;
- (void)setupScales;
- (void)pageContentViewDidPencilDown;

@end
