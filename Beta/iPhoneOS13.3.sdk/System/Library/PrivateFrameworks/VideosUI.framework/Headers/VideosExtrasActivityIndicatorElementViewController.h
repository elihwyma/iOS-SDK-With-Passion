/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VideosExtrasViewElementViewController.h>

@class VideosExtrasActivityIndicator;

__attribute__((visibility("hidden")))
@interface VideosExtrasActivityIndicatorElementViewController : VideosExtrasViewElementViewController

{
    VideosExtrasActivityIndicator *_activityView;
}

- (void)viewDidLoad;
- (void)_prepareLayout;
- (_Bool)matchParentHeight;

@end
