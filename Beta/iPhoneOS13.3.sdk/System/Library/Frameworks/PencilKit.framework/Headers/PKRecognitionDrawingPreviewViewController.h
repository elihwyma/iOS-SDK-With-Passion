/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIViewController.h>

#import <PencilKit/Swift-Protocol.h>

@class NSString, UIImage, UIImageView, UIScrollView;

@interface PKRecognitionDrawingPreviewViewController : UIViewController <Swift>

{
    UIImage *_drawingImage;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImage *drawingImage;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)centerImageView;
- (id)initWithDrawingImage:(id)arg1;

@end
