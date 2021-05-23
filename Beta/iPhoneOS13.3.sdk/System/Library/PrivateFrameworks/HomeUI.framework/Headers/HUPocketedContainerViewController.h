/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class NSString, UIVisualEffectView;

@interface HUPocketedContainerViewController : UIViewController <Swift>

{
    UIViewController *_contentViewController;
    UIViewController *_pocketViewController;
    UIVisualEffectView *_pocketBackgroundView;
}

@property (retain, nonatomic) UIVisualEffectView *pocketBackgroundView;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (retain, nonatomic) UIViewController *pocketViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)viewDidLayoutSubviews;
- (id)hu_preloadContent;
- (id)initWithContentViewController:(id)arg1 pocketViewController:(id)arg2;
- (void)_installContentViewController;
- (id)_installPocket;
- (id)_tearDownPocket;

@end
