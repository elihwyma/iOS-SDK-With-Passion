/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIView;

@protocol UIPreviewInteractionDelegate, _UIPreviewInteractionImpl, _UIPreviewInteractionTouchForceProviding;

@interface UIPreviewInteraction : NSObject

{
    id <_UIPreviewInteractionImpl> _interactionImpl;
}

@property (retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> touchForceProvider;
@property (weak, nonatomic, readonly) UIView *view;
@property (weak, nonatomic) id <UIPreviewInteractionDelegate> delegate;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithView:(id)arg1;
- (id)initClickBasedImplementationWithView:(id)arg1;

@end
