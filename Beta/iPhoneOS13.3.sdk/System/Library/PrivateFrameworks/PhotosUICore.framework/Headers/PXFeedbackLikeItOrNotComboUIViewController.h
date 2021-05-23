/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class UIActivityIndicatorView;

@protocol PXFeedbackFormDelegate;

@interface PXFeedbackLikeItOrNotComboUIViewController : UIViewController

{
    _Bool __showsActivityIndicator;
    id <PXFeedbackFormDelegate> _delegate;
    UIActivityIndicatorView *__activityIndicatorView;
}

@property (retain, nonatomic) id <PXFeedbackFormDelegate> delegate;
@property (nonatomic, readonly) UIActivityIndicatorView *_activityIndicatorView;
@property (nonatomic) _Bool _showsActivityIndicator;

- (id)initWithDelegate:(id)arg1;
- (void)viewDidLoad;
- (void)_likedIt:(id)arg1;
- (void)_dislikedIt:(id)arg1;
- (void)_doFileRadar:(id)arg1;
- (void)_fileRadar:(id)arg1;
- (void)showMoreFeedbackForm;
- (void)_provideFeedback:(id)arg1;
- (void)setShowsActivityIndicator:(_Bool)arg1;
- (void)cancelFeedback:(id)arg1;
- (void)finishWithSuccess:(_Bool)arg1;

@end
