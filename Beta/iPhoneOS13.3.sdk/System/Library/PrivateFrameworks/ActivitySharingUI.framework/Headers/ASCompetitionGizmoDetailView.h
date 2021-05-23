/*
 Image: /System/Library/PrivateFrameworks/ActivitySharingUI.framework/ActivitySharingUI
 */

#import <UIKit/UIView.h>

@class ASCompetitionGraphView, ASCompetitionMessageBubbleView, ASCompetitionScoreView, ASCompetitionTimeRemainingLabel, NSNumber;

@interface ASCompetitionGizmoDetailView : UIView

{
    ASCompetitionScoreView *_totalScoreView;
    ASCompetitionScoreView *_totalWinsScoreView;
    ASCompetitionGraphView *_graphView;
    ASCompetitionTimeRemainingLabel *_timeRemainingLabel;
    ASCompetitionMessageBubbleView *_messageBubbleView;
    UIView *_timeRemainingSeparator;
    UIView *_totalWinsSeparator;
    NSNumber *_previousLayoutWidth;
    long long _modules;
    long long _type;
    _Bool _isInteractionEnabled;
}

@property (nonatomic) _Bool isInteractionEnabled;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutForWidth:(double)arg1;
- (void)setFriend:(id)arg1 competition:(id)arg2;
- (id)initWithDetailViewType:(long long)arg1;
- (_Bool)supportsSmackTalkReply;

@end
