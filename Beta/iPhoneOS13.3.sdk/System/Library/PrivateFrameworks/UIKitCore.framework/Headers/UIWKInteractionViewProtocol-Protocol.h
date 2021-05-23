/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@protocol UIWKInteractionViewProtocol

- (unsigned short)hasMarkedText;
- (unsigned short)changeSelectionWithGestureAt:withGesture:withState: /* Error: Ran out of types for this method. */;
- (unsigned short)changeSelectionWithTouchesFrom:to:withGesture:withState: /* Error: Ran out of types for this method. */;
- (unsigned short)textFirstRect;
- (unsigned short)textLastRect;
- (unsigned short)requestAutocorrectionContextWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestAutocorrectionRectsForString:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)applyAutocorrection:toString:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)markedText;
- (unsigned short)hasSelectablePositionAtPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)textInteractionGesture:shouldBeginAtPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)webSelectionRects;
- (unsigned short)_cancelLongPressGestureRecognizer;
- (unsigned short)selectPositionAtPoint:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)beginSelectionInDirection:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)selectTextWithGranularity:atPoint:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSelectionWithExtentPoint:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSelectionWithExtentPoint:withBoundary:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)selectedText;
- (unsigned short)selectWordForReplacement;

@end
