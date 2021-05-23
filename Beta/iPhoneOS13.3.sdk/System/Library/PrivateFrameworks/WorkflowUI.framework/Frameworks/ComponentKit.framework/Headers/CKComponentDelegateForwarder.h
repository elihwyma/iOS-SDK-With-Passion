/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/Frameworks/ComponentKit.framework/ComponentKit
 */

#import <Foundation/NSObject.h>

@class UIView;

@interface CKComponentDelegateForwarder : NSObject

{
    vector_f9fd24f3 _selectors;
    UIView *_view;
}

@property (weak, nonatomic) UIView *view;

+ (id)newWithSelectors:(vector_f9fd24f3)arg1;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id).cxx_construct;
- (void)_doNothing;

@end
