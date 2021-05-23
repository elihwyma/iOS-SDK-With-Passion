/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSExtension, _UIWaitingForRemoteViewContainerViewController;

@protocol NSCopying;

@interface _UIResilientRemoteViewContainerViewController : UIViewController

{
    UIViewController *_remoteViewController;
    _Bool _delayingDisplayOfRemoteView;
    NSExtension *_extension;
    id <NSCopying> _extensionRequestIdentifier;
    UIViewController *_containedViewController;
    _UIWaitingForRemoteViewContainerViewController *_waitingController;
    UIViewController *_errorViewController;
}

@property (retain, nonatomic) NSExtension *extension;
@property (copy, nonatomic) id <NSCopying> extensionRequestIdentifier;
@property (retain, nonatomic) UIViewController *containedViewController;
@property (retain, nonatomic) _UIWaitingForRemoteViewContainerViewController *waitingController;
@property (retain, nonatomic) UIViewController *errorViewController;
@property (nonatomic) _Bool delayingDisplayOfRemoteView;
@property (nonatomic, readonly) id remoteViewController;

+ (id)instantiateWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (void)invalidate;
- (void)viewWillLayoutSubviews;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGRect)_defaultInitialViewFrame;
- (id)initWithExtension:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_displayRemoteViewController;
- (void)_displayError:(id)arg1;
- (void)delayDisplayOfRemoteController;
- (void)endDelayingDisplayOfRemoteController;

@end
