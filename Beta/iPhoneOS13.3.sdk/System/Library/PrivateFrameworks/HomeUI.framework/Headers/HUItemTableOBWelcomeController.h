/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <OnBoardingKit/OBWelcomeController.h>

#import <HomeUI/Swift-Protocol.h>

@class HUItemTableViewController, NSLayoutConstraint, NSString;

@interface HUItemTableOBWelcomeController : OBWelcomeController <Swift>

{
    HUItemTableViewController *_itemTableViewController;
    NSLayoutConstraint *_itemTableViewHeightConstraint;
}

@property (retain, nonatomic) HUItemTableViewController *itemTableViewController;
@property (retain, nonatomic) NSLayoutConstraint *itemTableViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)updateViewConstraints;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)hu_preloadContent;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 itemTableViewController:(id)arg4;

@end
