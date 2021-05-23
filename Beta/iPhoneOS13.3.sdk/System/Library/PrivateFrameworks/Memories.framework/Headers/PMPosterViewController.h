/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

@class NSString, PHAsset, PMTitleSubtitleView, UIImage, UIImageView, VEKProduction;

@interface PMPosterViewController : UIViewController

{
    _Bool _preventRotation;
    _Bool _isRotating;
    NSString *_titleFontName;
    VEKProduction *_production;
    double _titleScale;
    UIImage *_image;
    UIImageView *_imageView;
    PMTitleSubtitleView *_titleSubtitleView;
    NSString *_titleText;
    NSString *_subtitleText;
    PHAsset *_asset;
    struct CGRect _landscapeFraming;
    struct CGRect _portraitFraming;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) PMTitleSubtitleView *titleSubtitleView;
@property (nonatomic) struct CGRect landscapeFraming;
@property (nonatomic) struct CGRect portraitFraming;
@property (nonatomic) _Bool isRotating;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSString *titleFontName;
@property (weak, nonatomic) VEKProduction *production;
@property (nonatomic) double titleScale;
@property (nonatomic) _Bool preventRotation;
@property (nonatomic) double titleSubtitleAlpha;

+ (double)biggestScreenPixelDimension;

- (id)init;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)processedImageFromImage:(id)arg1;
- (id)renderToImage;
- (void)updateSubtitleTitleLabelForSize:(struct CGSize)arg1;
- (void)assignImageFraming;
- (void)fetchImageSomewhatAsynchronously;
- (struct CGRect)frameForImage;
- (void)fetchImageAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)sizeForImage;
- (void)prewarmFraming;

@end
