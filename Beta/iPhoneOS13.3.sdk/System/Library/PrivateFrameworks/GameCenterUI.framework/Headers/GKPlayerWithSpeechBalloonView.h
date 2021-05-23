/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class GKDashboardPlayerPhotoView, GKPlayer, GKSpeechBalloonBackgroundView, NSArray, NSString, UITextView;

@interface GKPlayerWithSpeechBalloonView : UIView

{
    UITextView *_speechTextView;
    GKDashboardPlayerPhotoView *_photoView;
    GKSpeechBalloonBackgroundView *_balloonView;
    NSArray *_replaceableConstraints;
}

@property (retain, nonatomic) NSArray *replaceableConstraints;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) NSString *speechText;
@property (nonatomic) unsigned char tipDirection;
@property (retain, nonatomic) UITextView *speechTextView;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *photoView;
@property (retain, nonatomic) GKSpeechBalloonBackgroundView *balloonView;
@property (nonatomic) unsigned char drawStyle;

+ (_Bool)requiresConstraintBasedLayout;
+ (id)instantiatePhotoContainer;

- (void)dealloc;
- (id)metrics;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)awakeFromNib;
- (void)setupSubviews;
- (void)_updateSpeechText:(id)arg1;

@end
