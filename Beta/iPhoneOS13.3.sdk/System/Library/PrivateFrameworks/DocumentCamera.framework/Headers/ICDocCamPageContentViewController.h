/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UIViewController.h>

@class UIImage, UIImageView;

@protocol ICDocCamPageContentViewTapDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamPageContentViewController : UIViewController

{
    unsigned long long _pageIndex;
    UIImage *_image;
    id <ICDocCamPageContentViewTapDelegate> _tapDelegate;
    UIImageView *_imageView;
}

@property (weak, nonatomic) UIImageView *imageView;
@property (nonatomic) unsigned long long pageIndex;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) id <ICDocCamPageContentViewTapDelegate> tapDelegate;

+ (double)leadingTrailingOffset:(long long)arg1;

- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)handleSingleTap:(id)arg1;

@end
