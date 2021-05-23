/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UINavigationController.h>

@class NSArray, NSHashTable, NSMapTable, NSString, TVModalPresentationConfiguration, UIAlertController, UIView, UIViewController;

@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface TVModalPresentationNavigationController : UINavigationController

{
    NSHashTable *_presentedViewControllers;
    UIViewController *_rootViewController;
    NSArray *_previousViewControllers;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
    UIAlertController *_containingAlertController;
    TVModalPresentationConfiguration *_configuration;
}

@property (nonatomic, readonly) NSHashTable *presentedViewControllers;
@property (weak, nonatomic) UIAlertController *containingAlertController;
@property (retain, nonatomic) TVModalPresentationConfiguration *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (weak, nonatomic, readonly) id <UIFocusEnvironment> parentFocusEnvironment;
@property (nonatomic, readonly) id <UIFocusItemContainer> focusItemContainer;
@property (weak, nonatomic, readonly) UIView *preferredFocusedView;

- (id)initWithConfiguration:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateConfiguration;
- (void)updatePreferredFocusedViewStateForFocus:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dismissForLastViewController:(_Bool)arg1;

@end
