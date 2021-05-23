/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class UIView;

@interface GKSectionSeparatorView : UICollectionReusableView

{
    UIView *_underlineView;
}

@property (retain, nonatomic) UIView *underlineView;

+ (_Bool)requiresConstraintBasedLayout;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
