/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <ComponentKit/CKComponent.h>

@class CKMemoizingComponentStateWrapper;

@interface CKMemoizingComponent : CKComponent

{
    CKMemoizingComponentStateWrapper *_wrapper;
    CKComponent *_component;
}

+ (id)initialState;
+ (id)newWithComponentBlock:(CDUnknownBlockType)arg1;

- (struct CKComponentLayout)computeLayoutThatFits:(struct CKSizeRange)arg1 restrictedToSize:(const struct CKComponentSize *)arg2 relativeToParentSize:(struct CGSize)arg3;

@end
