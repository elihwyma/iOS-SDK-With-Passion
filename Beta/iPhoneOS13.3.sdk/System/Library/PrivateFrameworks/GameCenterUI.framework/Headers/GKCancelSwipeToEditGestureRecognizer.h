/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UITapGestureRecognizer.h>

@class GKCollectionViewCell;

@interface GKCancelSwipeToEditGestureRecognizer : UITapGestureRecognizer

{
    GKCollectionViewCell *_currentEditingCell;
}

@property (retain, nonatomic) GKCollectionViewCell *currentEditingCell;

- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
