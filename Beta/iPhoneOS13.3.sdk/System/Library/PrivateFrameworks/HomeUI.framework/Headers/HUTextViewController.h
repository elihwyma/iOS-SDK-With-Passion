/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HUActivityLoadingView, NAFuture, NSAttributedString, NSString, UIBarButtonItem, UITextView, UIView;

@interface HUTextViewController : UIViewController <Swift>

{
    _Bool _showsShareButton;
    _Bool _showProgressIndicatorView;
    NSAttributedString *_textContent;
    UITextView *_textView;
    UIView *_curtainView;
    NSString *_titleText;
    HUActivityLoadingView *_loadingView;
    UIBarButtonItem *_shareButton;
    NAFuture *_loadingFuture;
}

@property (nonatomic, readonly) UITextView *textView;
@property (nonatomic, readonly) UIView *curtainView;
@property (copy, nonatomic) NSString *titleText;
@property (nonatomic, readonly) HUActivityLoadingView *loadingView;
@property (nonatomic) _Bool showProgressIndicatorView;
@property (nonatomic, readonly) UIBarButtonItem *shareButton;
@property (retain, nonatomic) NAFuture *loadingFuture;
@property (copy, nonatomic) NSAttributedString *textContent;
@property (nonatomic) _Bool showsShareButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)hu_preloadContent;
- (id)_textContentWithDefaultAttributes;
- (void)_shareLog:(id)arg1;
- (void)_fulfillProgressIndicatorState:(_Bool)arg1;
- (void)setShowProgressIndicatorView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)loadTextFromFuture:(id)arg1 textTitle:(id)arg2;

@end
