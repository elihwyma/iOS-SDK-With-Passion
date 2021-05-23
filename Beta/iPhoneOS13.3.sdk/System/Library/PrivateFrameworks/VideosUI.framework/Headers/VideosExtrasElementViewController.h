/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class NSMapTable, VideosExtrasBackgroundViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasElementViewController : UIViewController

{
    VideosExtrasBackgroundViewController *_backgroundViewController;
    NSMapTable *_bannerButtonMap;
    _Bool _wide;
}

@property (nonatomic, getter=isWide) _Bool wide;

+ (id)_borderView;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)backgroundViewController;
- (void)_prepareLayout;
- (void)_startBackgroundAudio;
- (void)configureBackgroundWithElements:(id)arg1;
- (unsigned long long)extrasSize;
- (void)_configureBannerWithElement:(id)arg1;
- (void)_didActivateButtonWithItem:(id)arg1;
- (id)_installBackdrop:(id)arg1;

@end
