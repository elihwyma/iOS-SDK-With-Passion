/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class IKImageElement, MPUArtworkView, NSArray, NSTimer, UIImageView;

__attribute__((visibility("hidden")))
@interface VideosExtrasBackgroundViewController : UIViewController

{
    NSArray *_backgroundElements;
    IKImageElement *_displayedImageElement;
    NSArray *_imageConstraints;
    MPUArtworkView *_imageView;
    NSTimer *_updateTimer;
    UIImageView *_vignetteView;
    unsigned long long _vignetteType;
}

@property (nonatomic, readonly) NSArray *backgroundElements;
@property (nonatomic) unsigned long long vignetteType;

+ (id)vignetteImageForType:(unsigned long long)arg1;

- (void)dealloc;
- (void)_invalidateTimer;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_updateImage;
- (void)_initVignette;
- (void)_scheduleTimerIfNeeded;
- (void)_didReceiveImage:(id)arg1;
- (void)_updateConstraintsForImageSize:(struct CGSize)arg1 position:(unsigned long long)arg2;
- (id)initWithBackgroundElement:(id)arg1;
- (id)initWithBackgroundElements:(id)arg1;

@end
