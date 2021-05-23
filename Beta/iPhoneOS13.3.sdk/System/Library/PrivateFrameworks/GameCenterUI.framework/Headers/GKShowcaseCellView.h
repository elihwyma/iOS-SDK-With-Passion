/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class GKHairlineView, UICollectionViewCell;

@interface GKShowcaseCellView : UICollectionReusableView

{
    UICollectionViewCell *_cell;
    SEL _touchedShowcaseCellAction;
    GKHairlineView *_underlineView;
}

@property (retain, nonatomic) GKHairlineView *underlineView;
@property (retain, nonatomic) UICollectionViewCell *cell;
@property (nonatomic) SEL touchedShowcaseCellAction;

+ (_Bool)requiresConstraintBasedLayout;

- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)alignmentRectForText;

@end
