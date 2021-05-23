/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@protocol UITextInteraction_AssistantDelegate <Swift>

@property (nonatomic) _Bool autoscrolled;
@property (nonatomic) struct CGPoint loupeGestureEndPoint;
@property (nonatomic) _Bool needsGestureUpdate;
@property (nonatomic, readonly) _Bool willHandoffLoupeMagnifier;
@property (nonatomic) _Bool expectingCommit;

- (unsigned short)view;
- (unsigned short)selectionView;
- (unsigned short)beginFloatingCursorAtPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)endFloatingCursor;
- (unsigned short)updateFloatingCursorAtPoint:velocity: /* Error: Ran out of types for this method. */;
- (unsigned short)setSelectionWithPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)scheduleDictationReplacementsForAlternatives:range: /* Error: Ran out of types for this method. */;
- (unsigned short)scrollSelectionToVisible;
- (unsigned short)setGestureRecognizers;
- (unsigned short)willBeginFloatingCursor: /* Error: Ran out of types for this method. */;
- (unsigned short)containerIsPlainStyleAtom;
- (unsigned short)setFirstResponderIfNecessary;
- (unsigned short)notifyKeyboardSelectionChanged;
- (unsigned short)rangeForTextReplacement: /* Error: Ran out of types for this method. */;
- (unsigned short)selectWordWithoutShowingCommands;
- (unsigned short)containerIsTextField;
- (unsigned short)scheduleReplacementsForRange:withOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)willBeginSelectionInteraction;
- (unsigned short)updateWithMagnifierTerminalPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)didEndSelectionInteraction;
- (unsigned short)useGesturesForEditableContent;
- (unsigned short)viewCouldBecomeEditable: /* Error: Ran out of types for this method. */;
- (unsigned short)resetWillHandoffLoupeMagnifier;
- (unsigned short)canBeginDragCursor: /* Error: Ran out of types for this method. */;
- (unsigned short)containerAllowsSelectionTintOnly;
- (unsigned short)checkEditabilityAndSetFirstResponderIfNecessary;
- (unsigned short)setSuppressSystemUI: /* Error: Ran out of types for this method. */;
- (unsigned short)didUseStashedSelection;
- (unsigned short)stashCurrentSelection;
- (unsigned short)clearStashedSelection;
- (unsigned short)lollipopGestureWithState:location:locationOfFirstTouch: /* Error: Ran out of types for this method. */;
- (unsigned short)setFirstResponderIfNecessaryActivatingSelection: /* Error: Ran out of types for this method. */;
- (unsigned short)extendSelectionToPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)extendSelectionToLoupeOrSetToPoint: /* Error: Ran out of types for this method. */;

@end
