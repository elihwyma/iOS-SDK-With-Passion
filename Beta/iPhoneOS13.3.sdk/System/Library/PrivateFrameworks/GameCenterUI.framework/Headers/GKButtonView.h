/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class GKCollectionViewDataSource, NSMutableArray, UIButton;

@interface GKButtonView : UICollectionReusableView

{
    UIButton *_button;
    SEL _action;
    NSMutableArray *_buttonConstraints;
    GKCollectionViewDataSource *_dataSource;
}

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSMutableArray *buttonConstraints;
@property (retain, nonatomic) GKCollectionViewDataSource *dataSource;
@property (nonatomic) SEL action;

+ (_Bool)requiresConstraintBasedLayout;
+ (void)registerSupplementaryViewClassesForKind:(id)arg1 withCollectionView:(id)arg2;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)applyLayoutAttributes:(id)arg1;
- (void)buttonPressed:(id)arg1;

@end
