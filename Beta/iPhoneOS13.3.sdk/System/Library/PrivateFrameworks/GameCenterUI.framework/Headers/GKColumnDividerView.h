/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class GKHairlineView;

@interface GKColumnDividerView : UICollectionReusableView

{
    GKHairlineView *_hairlineView;
}

@property (retain, nonatomic) GKHairlineView *hairlineView;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
