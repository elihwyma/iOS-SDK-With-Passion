/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UIViewController, _SBModalViewControllerStackTransition;

@protocol SBModalViewControllerStackDelegate;

@interface SBModalViewControllerStack : NSObject

{
    id <SBModalViewControllerStackDelegate> _delegate;
    UIViewController *_presentingViewController;
    NSMutableArray *_viewControllerStack;
    _SBModalViewControllerStackTransition *_currentTransition;
    NSMutableArray *_pendingTransitions;
}

@property (weak, nonatomic) id <SBModalViewControllerStackDelegate> delegate;
@property (nonatomic, readonly) NSArray *viewControllers;
@property (nonatomic, readonly) UIViewController *topViewController;

- (id)initWithPresentingViewController:(id)arg1;
- (void)addViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queuePendingTransition:(id)arg1;
- (void)_performPendingTransitionIfNecessary;
- (void)_removePendingTransition:(id)arg1 forSuccess:(_Bool)arg2;
- (void)_addPendingTransition:(id)arg1;
- (id)_popNextPendingTransition;
- (void)_setCurrentTransition:(id)arg1;
- (void)_addViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_noteWillPresentViewController:(id)arg1;
- (void)_noteDidPresentViewController:(id)arg1;
- (void)_noteWillDismissViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_noteDidDismissViewController:(id)arg1;
- (void)removeViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
