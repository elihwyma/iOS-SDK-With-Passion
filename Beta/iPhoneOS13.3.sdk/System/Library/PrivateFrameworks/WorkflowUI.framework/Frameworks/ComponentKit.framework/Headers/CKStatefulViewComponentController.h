/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <ComponentKit/CKComponentController.h>

@class UIView;

@interface CKStatefulViewComponentController : CKComponentController

{
    UIView *_statefulView;
    _Bool _mounted;
    id _statefulViewContext;
}

+ (id)newStatefulView:(id)arg1;
+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;
+ (id)contextForNewStatefulView:(id)arg1;
+ (long long)maximumPoolSize:(id)arg1;

- (void)didMount;
- (void)didAcquireStatefulView:(id)arg1;
- (void)willRelinquishStatefulView:(id)arg1;
- (id)statefulView;
- (void)didUpdateComponent;
- (void)didUnmount;
- (_Bool)canRelinquishStatefulView;
- (void)canRelinquishStatefulViewDidChange;
- (void)didRemount;
- (void)_presentStatefulView;
- (void)_relinquishStatefulViewIfPossible;

@end
