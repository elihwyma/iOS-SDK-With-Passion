/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

#import <CameraEffectsKit/Swift-Protocol.h>

@class NSString;

@protocol CFXEffectBrowserContentPresenterViewControllerDelegate;

@interface CFXEffectBrowserContentPresenterViewController : UIViewController <Swift>

{
    id <CFXEffectBrowserContentPresenterViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <CFXEffectBrowserContentPresenterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)effectBrowserViewController:(id)arg1 presentExpandedAppViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)effectBrowserViewController:(id)arg1 dismissExpandedAppViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGSize)expandedAppViewControllerSizeForEffectBrowserViewController:(id)arg1;
- (double)CFX_alwaysExpandedAppHeight;
- (id)CFX_constraintsForAlwaysExpandedAppView:(id)arg1 containerView:(id)arg2;
- (void)configureEffectBrowserContentPresentationForOrientation;

@end
