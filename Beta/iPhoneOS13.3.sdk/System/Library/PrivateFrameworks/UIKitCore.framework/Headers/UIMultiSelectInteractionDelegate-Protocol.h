/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol UIMultiSelectInteractionDelegate <Swift>

- (unsigned short)supportsMultiSelectInteraction: /* Error: Ran out of types for this method. */;
- (unsigned short)isInMultiSelectMode;
- (unsigned short)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)interaction:shouldAutomaticallyTransitionToMultiSelectModeAtPoint:withVelocity: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldBeginMultiSelectInteraction:ofType:atPoint:withVelocity: /* Error: Ran out of types for this method. */;
- (unsigned short)willBeginMultiSelectInteraction:atPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)multiSelectInteraction:toggleSelectionStateUpToPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)shouldAllowSelectionExtensionAtPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)multiSelectInteraction:appendSelectionAtPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)didEndMultiSelectInteraction:atPoint: /* Error: Ran out of types for this method. */;

@end
