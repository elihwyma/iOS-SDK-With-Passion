/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UICollectionView.h>

__attribute__((visibility("hidden")))
@interface CKNicknameUpdatesCollectionView : UICollectionView

{
    _Bool _suppressDatasourceUpdates;
}

@property (nonatomic) _Bool suppressDatasourceUpdates;

- (void)setDataSource:(id)arg1;

@end
