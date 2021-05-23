/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class GKGameRecord, UISegmentedControl;

@interface GKDashboardHeaderView : UICollectionReusableView

{
    _Bool _didSetupLikeButton;
    GKGameRecord *_gameRecord;
    UISegmentedControl *_segmentedControl;
}

@property (nonatomic) UISegmentedControl *segmentedControl;
@property (nonatomic) _Bool didSetupLikeButton;
@property (retain, nonatomic) GKGameRecord *gameRecord;

+ (double)defaultHeight;

- (void)dealloc;
- (void)awakeFromNib;

@end
