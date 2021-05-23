/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UITableViewCell;

@protocol UITable_UITableViewCellDelegate <Swift>

@property (nonatomic, readonly, getter=_rowSpacing) double rowSpacing;
@property (nonatomic, readonly, getter=_rawSeparatorInset) struct UIEdgeInsets rawSeparatorInset;
@property (nonatomic, readonly, getter=_popoverControllerStyle) long long popoverControllerStyle;
@property (nonatomic, readonly, getter=_isInModalViewController) _Bool inModalViewController;
@property (nonatomic, readonly, getter=_wasEditing) _Bool wasEditing;
@property (nonatomic, readonly, getter=_isEditingForSwipeDeletion) _Bool editingForSwipeDeletion;
@property (retain, nonatomic, getter=_swipeToDeleteCell, setter=_setSwipeToDeleteCell:) UITableViewCell *swipeToDeleteCell;

- (unsigned short)_swipeToDeleteCell: /* Error: Ran out of types for this method. */;
- (unsigned short)_animateDeletionOfRowAtIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)_shouldDrawThickSeparators;
- (unsigned short)setEditing:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)_cellDidShowSelectedBackground: /* Error: Ran out of types for this method. */;
- (unsigned short)_cellDidHideSelectedBackground: /* Error: Ran out of types for this method. */;
- (unsigned short)_canFocusCell: /* Error: Ran out of types for this method. */;
- (unsigned short)_cellDidBecomeFocused: /* Error: Ran out of types for this method. */;
- (unsigned short)_cellDidBecomeUnfocused: /* Error: Ran out of types for this method. */;
- (unsigned short)_shouldShowMenuForCell: /* Error: Ran out of types for this method. */;
- (unsigned short)_canPerformAction:forCell:sender: /* Error: Ran out of types for this method. */;
- (unsigned short)_performAction:forCell:sender: /* Error: Ran out of types for this method. */;
- (unsigned short)_calloutTargetRectForCell: /* Error: Ran out of types for this method. */;
- (unsigned short)_reorderingCell;
- (unsigned short)_isCellReorderable: /* Error: Ran out of types for this method. */;
- (unsigned short)_isReorderControlActiveForCell: /* Error: Ran out of types for this method. */;
- (unsigned short)_beginReorderingForCell:touch: /* Error: Ran out of types for this method. */;
- (unsigned short)_draggingReorderingCell:yDelta:touch: /* Error: Ran out of types for this method. */;
- (unsigned short)_endReorderingForCell:wasCancelled:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)_didInsertRowForTableCell: /* Error: Ran out of types for this method. */;
- (unsigned short)_titleForDeleteConfirmationButton: /* Error: Ran out of types for this method. */;
- (unsigned short)_animateDeletionOfRowWithCell: /* Error: Ran out of types for this method. */;
- (unsigned short)_highlightCell:animated:scrollPosition:highlight: /* Error: Ran out of types for this method. */;
- (unsigned short)_updateCell:withValue: /* Error: Ran out of types for this method. */;
- (unsigned short)_accessoryButtonAction: /* Error: Ran out of types for this method. */;
- (unsigned short)_userSelectCell: /* Error: Ran out of types for this method. */;
- (unsigned short)_prepareHighlightForCell:withInteraction: /* Error: Ran out of types for this method. */;
- (unsigned short)_highlightDidEndForCell:withInteraction: /* Error: Ran out of types for this method. */;

@end
