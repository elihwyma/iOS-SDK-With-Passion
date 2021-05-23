/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionView.h>

@interface CKEditableCollectionView : UICollectionView

{
    _Bool _editing;
    struct UIEdgeInsets _marginInsets;
}

@property (nonatomic) struct UIEdgeInsets marginInsets;
@property (nonatomic, getter=isEditing) _Bool editing;

- (struct UIEdgeInsets)safeAreaInsets;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end
