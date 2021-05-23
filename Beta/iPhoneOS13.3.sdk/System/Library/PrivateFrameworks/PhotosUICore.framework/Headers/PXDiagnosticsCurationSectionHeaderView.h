/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionViewCell.h>

@class NSDictionary, NSString, PXStateBadgeView, UILabel;

@interface PXDiagnosticsCurationSectionHeaderView : UICollectionViewCell

{
    PXStateBadgeView *_stateBadgeView;
    UILabel *_agentAndStageLabel;
    UILabel *_reasonLabel;
    NSDictionary *_sectionInfo;
    NSString *_state;
    NSString *_agentAndStage;
    NSString *_reason;
}

@property (retain, nonatomic) NSDictionary *sectionInfo;
@property (retain, nonatomic) NSString *state;
@property (retain, nonatomic) NSString *agentAndStage;
@property (retain, nonatomic) NSString *reason;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
