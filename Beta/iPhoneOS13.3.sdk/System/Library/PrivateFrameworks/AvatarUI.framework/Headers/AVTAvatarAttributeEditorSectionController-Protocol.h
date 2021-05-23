/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTAvatarAttributeEditorControllerSubSelectionDelegate, AVTAvatarAttributeEditorSection;

@protocol AVTAvatarAttributeEditorSectionController <Swift>

@property (weak, nonatomic) id <AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate;
@property (nonatomic, readonly) id <AVTAvatarAttributeEditorSection> section;
@property (nonatomic) long long selectedIndex;

+ (unsigned short)supportsSelection;

- (unsigned short)numberOfItems;
- (unsigned short)indexForItem: /* Error: Ran out of types for this method. */;
- (unsigned short)resetToDefaultState;
- (unsigned short)updateWithSection: /* Error: Ran out of types for this method. */;
- (unsigned short)evaluateDisplayCondition: /* Error: Ran out of types for this method. */;
- (unsigned short)viewForIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)sizeForItemAtIndex:fittingSize: /* Error: Ran out of types for this method. */;
- (unsigned short)edgeInsetsFittingSize: /* Error: Ran out of types for this method. */;
- (unsigned short)prefetchingSectionItemForIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)updateCell:forItemAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)cell:willDisplayAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateLayoutForNewContainerSize: /* Error: Ran out of types for this method. */;
- (unsigned short)didHighlightItemAtIndex:cell:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)didUnhighlightItemAtIndex:cell:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)didSelectItemAtIndex:cell: /* Error: Ran out of types for this method. */;

@end
