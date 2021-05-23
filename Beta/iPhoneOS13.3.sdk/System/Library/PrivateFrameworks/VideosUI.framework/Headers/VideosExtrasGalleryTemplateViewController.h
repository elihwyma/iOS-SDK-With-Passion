/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VideosExtrasTemplateViewController.h>

@class VideosExtrasBannerController, VideosExtrasGridElementViewController;

__attribute__((visibility("hidden")))
@interface VideosExtrasGalleryTemplateViewController : VideosExtrasTemplateViewController

{
    VideosExtrasBannerController *_bannerController;
    VideosExtrasGridElementViewController *_gridViewController;
    unsigned long long _selectedItemIndex;
}

@property (nonatomic) unsigned long long selectedItemIndex;

- (void)viewDidLoad;
- (id)contentScrollView;
- (id)templateElement;
- (_Bool)showsPlaceholder;
- (void)_prepareLayout;

@end
