/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

#import <UIKit/UIViewController.h>

@class PLExpandedPlatterPresentationController;

@interface UIViewController (PlatterKitAdditions)

@property (nonatomic, readonly) PLExpandedPlatterPresentationController *expandedPlatterPresentationController;

- (id)pl_presentationControllerIfPresented;
- (id)pl_presentingPresentationController;
- (id)pl_containingClickPresentationInteractionPresentingViewController;
- (id)pl_containingPreviewInteractionPresentingViewController;

@end
