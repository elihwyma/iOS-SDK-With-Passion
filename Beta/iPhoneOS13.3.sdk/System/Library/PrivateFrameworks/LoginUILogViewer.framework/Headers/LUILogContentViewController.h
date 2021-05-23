/*
 Image: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
 */

#import <UIKitCore/UIViewController.h>

#import <LoginUILogViewer/Swift-Protocol.h>

@class LUILogLocatorView, LUILogOptionsView, NSArray, NSString, UIActivityIndicatorView, UILabel, UIPanGestureRecognizer, UITextView, UIView;

@protocol LUILogContentViewControllerDelegate;

@interface LUILogContentViewController : UIViewController <Swift>

{
    UITextView *_textView;
    id <LUILogContentViewControllerDelegate> _delegate;
    LUILogOptionsView *_logOptionsView;
    LUILogLocatorView *_logLocatorView;
    UIActivityIndicatorView *_spinner;
    NSArray *_screenshotItems;
    UIView *_textViewHolderView;
    UIPanGestureRecognizer *_panGesture;
    UILabel *_scrollIndicatorView;
}

@property (retain, nonatomic) LUILogOptionsView *logOptionsView;
@property (retain, nonatomic) LUILogLocatorView *logLocatorView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) NSArray *screenshotItems;
@property (retain, nonatomic) UIView *textViewHolderView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UILabel *scrollIndicatorView;
@property (nonatomic, readonly) UITextView *textView;
@property (weak, nonatomic) id <LUILogContentViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)handlePan:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)showSpinner:(_Bool)arg1;
- (void)clearScreenshots;
- (void)enableTimeConsumingOptions:(_Bool)arg1;
- (void)showLogOptionsView;
- (void)showLogTextView;
- (void)_setupButtonActions;
- (void)_setupTextViewGesture;
- (id)_createLogTextView;
- (id)_createLogOptionsView;
- (id)_createLogLocatorView;
- (void)logOptionButtonTapped:(id)arg1;
- (void)screenshotButtonTapped:(id)arg1;
- (void)upArrowButtonTapped:(id)arg1;
- (void)downArrowButtonTapped:(id)arg1;
- (struct _NSRange)_visibleRangeOfTextView:(id)arg1;
- (id)_generateScreenshotItem;
- (void)_applyScreenShotAnimation;
- (id)_dateWithPercentage:(double)arg1;

@end
