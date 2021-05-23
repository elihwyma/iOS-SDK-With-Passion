/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class UIView, VUIAppSpinnerView;

__attribute__((visibility("hidden")))
@interface VUIAppLoadingViewController : UIViewController

{
    VUIAppSpinnerView *_loadingView;
    UIView *_parentView;
    UIView *_principalView;
    _Bool _cancelLoading;
    _Bool _loading;
}

@property (nonatomic) _Bool loading;

- (void)setView:(id)arg1;

@end
