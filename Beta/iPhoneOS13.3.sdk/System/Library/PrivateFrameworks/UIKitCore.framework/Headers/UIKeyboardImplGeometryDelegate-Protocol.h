/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@protocol UIKeyboardImplGeometryDelegate

@property (nonatomic, getter=isMinimized) _Bool minimized;

- (unsigned short)isActive;
- (unsigned short)isAutomatic;
- (unsigned short)prepareForImplBoundsHeightChange:suppressNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)implBoundsHeightChangeDone:suppressNotification: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldSaveMinimizationState;
- (unsigned short)canDismiss;

@end
