/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIViewController.h>

@class SKUIClientContext, SKUIFacebookLikeStatus, SKUIReviewsFacebookView;

@protocol SKUIReviewsFacebookViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SKUIReviewsFacebookViewController : UIViewController

{
    SKUIClientContext *_clientContext;
    id <SKUIReviewsFacebookViewControllerDelegate> _delegate;
    SKUIFacebookLikeStatus *_facebookLikeStatus;
    SKUIReviewsFacebookView *_facebookView;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy, nonatomic) SKUIFacebookLikeStatus *facebookLikeStatus;
@property (weak, nonatomic) id <SKUIReviewsFacebookViewControllerDelegate> delegate;

- (void)dealloc;
- (void)loadView;
- (void)_reloadFacebookView;
- (void)_toggleLike:(id)arg1;
- (void)_changeStatusToUserLiked:(_Bool)arg1;

@end
