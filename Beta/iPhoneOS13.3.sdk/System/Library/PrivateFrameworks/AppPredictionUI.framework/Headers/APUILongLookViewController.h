/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <UIKit/UIViewController.h>

@class NSString, PLExpandedPlatterView, SUICProgressEventViewController, UIActivityIndicatorView, UITapGestureRecognizer, UIView;

@protocol APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate, PLClickPresentationInteractionPresenting;

@interface APUILongLookViewController : UIViewController

{
    SUICProgressEventViewController *_progressEventViewController;
    UIActivityIndicatorView *_activityIndicatorView;
    _Bool _suppressSpinner;
    id <PLClickPresentationInteractionPresenting> _presenter;
    id <APUILongLookViewControllerDataSource> _dataSource;
    id <APUILongLookViewControllerDelegate> _delegate;
    PLExpandedPlatterView *_expandedPlatterView;
    UITapGestureRecognizer *_platterTapGestureRecognizer;
}

@property (retain, nonatomic) PLExpandedPlatterView *expandedPlatterView;
@property (retain, nonatomic) UITapGestureRecognizer *platterTapGestureRecognizer;
@property (weak, nonatomic) id <APUILongLookViewControllerDataSource> dataSource;
@property (weak, nonatomic) id <APUILongLookViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PLClickPresentationInteractionPresenting> presenter;
@property (nonatomic, readonly) UIView *viewWithContent;
@property (nonatomic, readonly) UIView *viewForTouchContinuation;

- (void)loadView;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_setActions:(id)arg1;
- (void)_dismissButtonTapped:(id)arg1;
- (id)expandedPlatterViewForPresentationView:(id)arg1;
- (void)_setupProgressIndicator;
- (void)_setupContentView;
- (void)_setCustomContentViewController:(id)arg1;
- (void)setExpandedPlatterSize:(struct CGSize)arg1;
- (void)_platterDidReceiveTap:(id)arg1;
- (void)_platterUtilityButtonTapped:(id)arg1;

@end
