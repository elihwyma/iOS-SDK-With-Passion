/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardEmojiKeyView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSIndexPath, NSString, UICollectionViewFlowLayout, UIKeyboardEmojiCategory, UIKeyboardEmojiCollectionView, UIKeyboardEmojiGraphicsTraits, UIResponder;

@protocol UIKBEmojiHitTestResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionInputView : UIKeyboardEmojiKeyView <Swift>

{
    UIKeyboardEmojiCollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UIKeyboardEmojiCategory *_category;
    NSIndexPath *_tappedSkinToneEmoji;
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    _Bool _isDraggingInputView;
    unsigned long long _currentSection;
    _Bool _inputDelegateCanSupportAnimoji;
    _Bool _hasShownAnimojiFirstTimeExperience;
    _Bool _shouldRetryFetchingAnimojiRecents;
    _Bool _useWideAnimojiCell;
    _Bool _hasShownAnimojiCell;
    double _frameInset;
    CDUnknownBlockType _completionBlock;
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property UIKeyboardEmojiCategory *category;
@property (nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder;
@property (readonly) _Bool isDraggingInputView;
@property (nonatomic) NSIndexPath *tappedSkinToneEmoji;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldHighlightEmoji:(id)arg1;

- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)didMoveToWindow;
- (void)setContentScaleFactor:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (_Bool)_shouldReverseLayoutDirection;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)didTearDownRecentsViewForKeyboardMediaController:(id)arg1;
- (void)dimKeys:(id)arg1;
- (id)subTreeHitTest:(struct CGPoint)arg1;
- (long long)didInputSubTree:(id)arg1;
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateToCategory:(long long)arg1;
- (_Bool)baseStringIsCoupleEmoji:(id)arg1;
- (_Bool)skinToneWasUsedForEmoji:(id)arg1;
- (_Bool)_userHasSelectedSkinToneEmoji;
- (id)selectedChildSkinToneEmoji:(id)arg1;
- (id)emojiBaseString:(id)arg1;
- (void)_setUserHasSelectedSkinToneEmoji:(_Bool)arg1;
- (void)shouldDismissModalDisplayView:(id)arg1;
- (_Bool)memojiSettingEnabled;
- (_Bool)_shouldShowRecentlyUsedMedia;
- (id)firstFullyVisibleHeader;
- (double)snappedXOffsetForOffset:(double)arg1 scrubbing:(_Bool)arg2;
- (double)_recentlyUsedMediaRoundedOffset:(double)arg1 recentlyUsedMediaCellWidth:(double)arg2;
- (id)itemInRect:(struct CGRect)arg1;
- (long long)indexForPrettyCategoryDisplay:(id)arg1;
- (id)emojiBaseFirstCharacterString:(id)arg1;
- (_Bool)genderEmojiBaseStringNeedVariantSelector:(id)arg1;
- (long long)updateToCategoryWithOffsetPercentage:(double)arg1;

@end
