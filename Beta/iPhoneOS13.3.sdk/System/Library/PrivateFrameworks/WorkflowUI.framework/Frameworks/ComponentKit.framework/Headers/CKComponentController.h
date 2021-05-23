/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKComponent, UIView;

@interface CKComponentController : NSObject

{
    unsigned long long _state;
    _Bool _updatingComponent;
    _Bool _performedInitialMount;
    CKComponent *_previousComponent;
    struct CKComponentControllerAnimationWrapper _animationData;
    CKComponent *_component;
    UIView *_view;
}

@property (weak, nonatomic, readonly) CKComponent *component;
@property (nonatomic, readonly) UIView *view;

- (id).cxx_construct;
- (id)nextResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (id)initWithComponent:(id)arg1;
- (void)didMount;
- (void)componentTreeWillAppear;
- (void)componentTreeDidDisappear;
- (void)didUpdateComponent;
- (void)willUnmount;
- (void)didUnmount;
- (void)willUpdateComponent;
- (void)componentDidMount:(id)arg1;
- (void)component:(id)arg1 willRelinquishView:(id)arg2;
- (void)componentDidUnmount:(id)arg1;
- (void)componentWillUnmount:(id)arg1;
- (void)component:(id)arg1 didAcquireView:(id)arg2;
- (void)componentWillMount:(id)arg1;
- (void)willMount;
- (void)willRemount;
- (void)didRemount;
- (void)componentWillRelinquishView;
- (void)componentDidAcquireView;
- (void)_relinquishView;
- (void)_cleanupAppliedAnimations;

@end
