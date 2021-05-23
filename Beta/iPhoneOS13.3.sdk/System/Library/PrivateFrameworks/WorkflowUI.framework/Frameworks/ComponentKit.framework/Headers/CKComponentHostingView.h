/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <UIKit/UIView.h>

@class CKComponent, NSSet, NSString;

@protocol CKComponentHostingViewDelegate, CKComponentSizeRangeProviding;

@interface CKComponentHostingView : UIView

{
    Class _componentProvider;
    id <CKComponentSizeRangeProviding> _sizeRangeProvider;
    struct CKComponentHostingViewInputs _pendingInputs;
    struct CKComponentBoundsAnimation _boundsAnimation;
    CKComponent *_component;
    _Bool _componentNeedsUpdate;
    unsigned long long _requestedUpdateMode;
    struct CKComponentLayout _mountedLayout;
    NSSet *_mountedComponents;
    _Bool _scheduledAsynchronousComponentUpdate;
    _Bool _isSynchronouslyUpdatingComponent;
    _Bool _isMountingComponent;
    id <CKComponentHostingViewDelegate> _delegate;
    UIView *_containerView;
}

@property (nonatomic, readonly) UIView *containerView;
@property (weak, nonatomic) id <CKComponentHostingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateModel:(id)arg1 mode:(unsigned long long)arg2;
- (id)initWithComponentProvider:(Class)arg1 sizeRangeProvider:(id)arg2;
- (void)updateContext:(id)arg1 mode:(unsigned long long)arg2;
- (void)componentScopeHandleWithIdentifier:(int)arg1 rootIdentifier:(int)arg2 didReceiveStateUpdate:(CDUnknownBlockType)arg3 mode:(unsigned long long)arg4;
- (void)didReceiveReflowComponentsRequest;
- (const struct CKComponentLayout *)mountedLayout;
- (void)_setNeedsUpdateWithMode:(unsigned long long)arg1;
- (void)_asynchronouslyUpdateComponentIfNeeded;
- (void)_scheduleAsynchronousUpdate;
- (void)_applyResult:(const struct CKBuildComponentResult *)arg1;
- (void)_synchronouslyUpdateComponentIfNeeded;

@end
