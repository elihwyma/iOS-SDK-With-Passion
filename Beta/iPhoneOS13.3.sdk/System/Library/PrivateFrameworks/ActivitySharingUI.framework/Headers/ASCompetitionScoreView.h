/*
 Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
 */

#import <UIKit/UIView.h>

@class ASCompetitionParticipantScoreView, ASCompetitionScoreViewConfiguration, NSNumber, UIImageView, UILabel;

@interface ASCompetitionScoreView : UIView

{
    ASCompetitionScoreViewConfiguration *_configuration;
    ASCompetitionParticipantScoreView *_myScoreView;
    ASCompetitionParticipantScoreView *_opponentScoreView;
    UIImageView *_achievementThumbnailView;
    UILabel *_scoreTypeHeaderLabel;
    NSNumber *_previousLayoutWidth;
    _Bool _isRTLLayout;
}

@property (nonatomic, readonly) double lastBaselineY;

+ (double)preferredHeightForConfiguration:(id)arg1 friend:(id)arg2;

- (id)initWithConfiguration:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutForWidth:(double)arg1;
- (double)participantScoreViewWidthForParticipant:(long long)arg1 maximumWidth:(double)arg2;
- (void)setFriend:(id)arg1 competition:(id)arg2;

@end
