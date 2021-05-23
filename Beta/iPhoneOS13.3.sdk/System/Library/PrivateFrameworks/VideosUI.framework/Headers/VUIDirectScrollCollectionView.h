/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UICollectionView.h>

__attribute__((visibility("hidden")))
@interface VUIDirectScrollCollectionView : UICollectionView

- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (void)_downArrowAction:(id)arg1;
- (void)_upArrowAction:(id)arg1;
- (double)_tapScrollDelta;

@end
