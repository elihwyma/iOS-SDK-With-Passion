/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class GKLabel, GKTextBubbleControl, GKTurnBasedMatch, NSLayoutConstraint, NSString;

@interface GKTurnBasedMatchDetailHeaderView : UICollectionReusableView

{
    _Bool _compactHeight;
    GKTurnBasedMatch *_match;
    NSString *_infoText;
    id _bubbleTarget;
    SEL _bubbleAction;
    GKTextBubbleControl *_actionBubble;
    GKLabel *_playingWithLabel;
    GKLabel *_startedLabel;
    GKLabel *_lastTurnLabel;
    GKLabel *_infoLabel;
    NSLayoutConstraint *_playingToTopConstraint;
    NSLayoutConstraint *_bubbleToLastConstraint;
}

@property (retain, nonatomic) GKLabel *playingWithLabel;
@property (retain, nonatomic) GKLabel *startedLabel;
@property (retain, nonatomic) GKLabel *lastTurnLabel;
@property (retain, nonatomic) GKLabel *infoLabel;
@property (retain, nonatomic) GKTextBubbleControl *actionBubble;
@property (nonatomic, readonly) NSString *playingWithString;
@property (nonatomic) NSLayoutConstraint *playingToTopConstraint;
@property (nonatomic) NSLayoutConstraint *bubbleToLastConstraint;
@property (nonatomic) _Bool compactHeight;
@property (retain, nonatomic) GKTurnBasedMatch *match;
@property (retain, nonatomic) NSString *infoText;
@property (retain, nonatomic) NSString *bubbleText;
@property (nonatomic) long long bubbleType;
@property (nonatomic) id bubbleTarget;
@property (nonatomic) SEL bubbleAction;

+ (_Bool)requiresConstraintBasedLayout;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setLabelAlpha:(double)arg1;
- (void)didUpdateModel;
- (void)establishConstraints;
- (void)bubblePressed:(id)arg1;

@end
