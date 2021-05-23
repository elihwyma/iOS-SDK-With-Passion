/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKEditableCollectionView.h>

@interface CKTranscriptCollectionView : CKEditableCollectionView

{
    _Bool _ignoresContentOffsetChanges;
    _Bool _dynamicsDisabled;
}

@property (nonatomic) _Bool ignoresContentOffsetChanges;
@property (nonatomic) _Bool dynamicsDisabled;

- (void)setContentSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadData;
- (void)setContentOffset:(struct CGPoint)arg1;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;

@end
