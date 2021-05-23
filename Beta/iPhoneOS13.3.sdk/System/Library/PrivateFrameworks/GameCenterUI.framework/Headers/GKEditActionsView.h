/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class CALayer, GKCollectionViewCell, NSArray;

@interface GKEditActionsView : UIView

{
    double _visibleWidth;
    CALayer *_maskLayer;
    GKCollectionViewCell *_cell;
    NSArray *_editActionConstraints;
    NSArray *_actionButtons;
}

@property (nonatomic) double visibleWidth;
@property (retain, nonatomic) CALayer *maskLayer;
@property (nonatomic) GKCollectionViewCell *cell;
@property (retain, nonatomic) NSArray *editActionConstraints;
@property (retain, nonatomic) NSArray *actionButtons;

- (void)dealloc;
- (void)didTouchEditAction:(id)arg1;
- (void)didTouchMoreEditAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 cell:(id)arg2;
- (void)prepareActionButtons;

@end
