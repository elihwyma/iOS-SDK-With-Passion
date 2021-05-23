/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class CKComponentScopeHandle, UIView;

@protocol NSObject;

@interface CKComponent : NSObject

{
    CKComponentScopeHandle *_scopeHandle;
    struct CKComponentViewConfiguration _viewConfiguration;
    struct unique_ptr<CKComponentMountInfo, std::__1::default_delete<CKComponentMountInfo>> _mountInfo;
    struct CKComponentSize _size;
}

@property (weak, nonatomic) UIView *rootComponentMountedView;
@property (nonatomic, readonly) id <NSObject> scopeFrameToken;
@property (nonatomic, readonly) struct CKComponentSize size;

+ (id)new;
+ (id)initialState;
+ (id)newWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)nextResponder;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)controller;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (struct CKComponentViewContext)viewContext;
- (const struct CKComponentViewConfiguration *)viewConfiguration;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;
- (id)viewForAnimation;
- (struct CKComponentLayout)layoutThatFits:(struct CKSizeRange)arg1 parentSize:(struct CGSize)arg2;
- (struct CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1;
- (void)updateState:(CDUnknownBlockType)arg1 mode:(unsigned long long)arg2;
- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1;
- (id)initWithView:(const struct CKComponentViewConfiguration *)arg1 size:(const struct CKComponentSize *)arg2;
- (struct MountResult)mountInContext:(const struct MountContext *)arg1 size:(struct CGSize)arg2 children:(shared_ptr_6a94d7a4)arg3 supercomponent:(id)arg4;
- (void)unmount;
- (void)_relinquishMountedView;
- (void)childrenDidMount;
- (vector_035bbd4a)animationsOnInitialMount;
- (vector_035bbd4a)animationsFromPreviousComponent:(id)arg1;
- (id)nextResponderAfterController;

@end
