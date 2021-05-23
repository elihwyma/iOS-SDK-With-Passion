/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <UIKit/UIControl.h>

@class NSMutableArray, UIColor;

@interface MPUNowPlayingIndicatorView : UIControl

{
    NSMutableArray *_levelViews;
    _Bool _showsLevelGutters;
    double _interLevelSpacing;
    double _levelCornerRadius;
    double _levelWidth;
    double _maximumLevelHeight;
    double _minimumLevelHeight;
    long long _numberOfLevels;
    long long _playbackState;
    UIColor *_levelGuttersColor;
}

@property (nonatomic) double interLevelSpacing;
@property (nonatomic) double levelCornerRadius;
@property (nonatomic) double levelWidth;
@property (nonatomic) double maximumLevelHeight;
@property (nonatomic) double minimumLevelHeight;
@property (nonatomic) long long numberOfLevels;
@property (nonatomic) long long playbackState;
@property (nonatomic) _Bool showsLevelGutters;
@property (retain, nonatomic) UIColor *levelGuttersColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (void)drawRect:(struct CGRect)arg1;
- (void)_removeAllAnimations:(_Bool)arg1;
- (void)_reloadLevelViews;
- (void)_updateLevelAnimations;

@end
