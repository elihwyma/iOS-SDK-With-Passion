/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIPreviewInteraction, UIView;

@protocol UIPreviewInteractionDelegate, _UIPreviewInteractionTouchForceProviding;

@protocol _UIPreviewInteractionImpl <Swift>

@property (weak, nonatomic) id <UIPreviewInteractionDelegate> delegate;
@property (weak, nonatomic, readonly) UIView *view;
@property (retain, nonatomic) id <_UIPreviewInteractionTouchForceProviding> touchForceProvider;
@property (weak, nonatomic) UIPreviewInteraction *previewInteraction;

- (unsigned short)cancelInteraction;
- (unsigned short)locationInCoordinateSpace: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithView:previewInteraction: /* Error: Ran out of types for this method. */;
- (unsigned short)_startPreviewAtLocation:inCoordinateSpace: /* Error: Ran out of types for this method. */;

@end
