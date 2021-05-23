/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSLayoutConstraint, NSString, UIBarButtonItem, UIKBAutoFillTestExpectedResult, UIKBAutoFillTestTaggerView, UIKBAutoFillTestViewController, UIScrollView, UIView;

@protocol UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestGroundTruthGenerationViewController : UIViewController

{
    UIKBAutoFillTestViewController *_testViewController;
    UIKBAutoFillTestExpectedResult *_expectedResult;
    UIScrollView *_scrollView;
    UIKBAutoFillTestTaggerView *_taggerView;
    NSLayoutConstraint *_scrollViewBottomConstraint;
    UIView *_highlightView;
    UIView *_highlightBox;
    UIBarButtonItem *_doneBarButtonItem;
    id <UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate> delegate;
@property (nonatomic, readonly) UIKBAutoFillTestViewController *testViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)taggerView:(id)arg1 didTagFormRequest:(id)arg2 withSelectedType:(long long)arg3;
- (void)taggerView:(id)arg1 didTagTextFieldRequest:(id)arg2 withSelectedType:(long long)arg3;
- (void)taggerView:(id)arg1 willTagRequest:(id)arg2;
- (long long)taggerView:(id)arg1 selectedTypeForFormRequest:(id)arg2;
- (long long)taggerView:(id)arg1 selectedTypeForTextFieldRequest:(id)arg2;
- (void)taggerViewDidFinish:(id)arg1;
- (void)_cancelBarButtonItemAction:(id)arg1;
- (void)_enumerateSubviewsOfRootView:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_removeTaggerHighlightView;
- (void)_moveTaggerHighlightViewOverView:(id)arg1;
- (id)initWithAutoFillTestViewController:(id)arg1;

@end
