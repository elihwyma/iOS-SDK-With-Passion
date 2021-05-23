/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, SKUIClientContext, SKUISlideshowImageScrollView, UIImage, UIView;

@protocol SKUISlideshowItemViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUISlideshowItemViewController : UIViewController <Swift>

{
    SKUIClientContext *_clientContext;
    UIView *_loadingView;
    _Bool _zoomingGestureThresholdBroken;
    struct CGPoint _lastContentOffset;
    double _lastZoomScale;
    id <SKUISlideshowItemViewControllerDelegate> _delegate;
    SKUISlideshowImageScrollView *_imageScrollView;
    long long _indexInCollection;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUISlideshowItemViewControllerDelegate> delegate;
@property (nonatomic, readonly) SKUISlideshowImageScrollView *imageScrollView;
@property (retain, nonatomic) UIImage *itemImage;
@property (nonatomic) long long indexInCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)_gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)_newLoadingView;
- (void)_pinchGestureAction:(id)arg1;

@end
