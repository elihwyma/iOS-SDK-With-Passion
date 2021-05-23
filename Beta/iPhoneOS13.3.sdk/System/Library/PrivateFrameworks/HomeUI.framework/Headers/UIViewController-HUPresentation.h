/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class HFItem, NSString;

@interface UIViewController (HUPresentation)

@property (nonatomic, readonly) HFItem *hu_topmostPresentedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HFItem *hu_presentedItem;

- (id)hu_presentPreloadableViewController:(id)arg1 animated:(_Bool)arg2;
- (id)hu_dismissViewControllerAnimated:(_Bool)arg1;
- (id)hu_delegateForModalPresentation;
- (id)hu_performPresentationRequest:(id)arg1;
- (id)hu_performDismissalRequest:(id)arg1;
- (id)hu_pocketedContainerViewController;

@end
