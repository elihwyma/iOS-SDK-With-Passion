/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class UIButton;

@interface HUClipScrubberAccessoryToggleView : UIView

{
    UIButton *_accessoryButton;
    UIButton *_liveButton;
    UIView *_backgroundView;
}

@property (retain, nonatomic) UIButton *accessoryButton;
@property (retain, nonatomic) UIButton *liveButton;
@property (retain, nonatomic) UIView *backgroundView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)displayForTimelineState:(unsigned long long)arg1;
- (void)displayWithoutBackgroundVisualEffects;

@end
