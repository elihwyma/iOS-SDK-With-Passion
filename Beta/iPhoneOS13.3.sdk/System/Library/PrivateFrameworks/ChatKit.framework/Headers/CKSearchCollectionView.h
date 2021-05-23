/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionView.h>

@interface CKSearchCollectionView : UICollectionView

{
    _Bool _editing;
    _Bool _suppressDatasourceUpdates;
    _Bool _lockContentOffset;
    struct UIEdgeInsets _marginInsets;
}

@property (nonatomic) struct UIEdgeInsets marginInsets;
@property (nonatomic, getter=isEditing) _Bool editing;
@property (nonatomic) _Bool suppressDatasourceUpdates;
@property (nonatomic) _Bool lockContentOffset;

- (void)setDataSource:(id)arg1;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;

@end
