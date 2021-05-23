/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class NAFuture, NSString, UIBarButtonItem;

@protocol HUConfigurationContentViewController, HUConfigurationViewControllerDelegate;

@interface HUConfigurationWrapperViewController : UIViewController <Swift>

{
    _Bool _isFinalStep;
    id <HUConfigurationViewControllerDelegate> _delegate;
    UIViewController *_contentViewController;
    NAFuture *_finishFuture;
    UIBarButtonItem *_backButtonItem;
    UIBarButtonItem *_nextButtonItem;
}

@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic, readonly) UIViewController<HUConfigurationContentViewController> *protocolConformingContentViewController;
@property (retain, nonatomic) NAFuture *finishFuture;
@property (retain, nonatomic) UIBarButtonItem *backButtonItem;
@property (retain, nonatomic) UIBarButtonItem *nextButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUConfigurationViewControllerDelegate> delegate;
@property (nonatomic) _Bool isFinalStep;

- (id)title;
- (id)initWithContentViewController:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_nextAction:(id)arg1;
- (void)_backAction:(id)arg1;
- (void)_updateNextButton;
- (id)hu_preloadContent;
- (id)initWithContentViewController:(id)arg1 configurationDelegate:(id)arg2;
- (_Bool)_canGoNext;
- (void)contentViewControllerDidUpdate:(id)arg1;

@end
