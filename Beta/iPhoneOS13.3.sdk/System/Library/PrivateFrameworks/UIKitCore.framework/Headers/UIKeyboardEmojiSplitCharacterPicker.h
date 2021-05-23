/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardEmojiCollectionInputView.h>

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiCollectionInputView

- (void)dealloc;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)updateToCategory:(long long)arg1;
- (double)snappedYOffsetForOffset:(double)arg1;

@end
