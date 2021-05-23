/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface MTUIGlyphTimeView : UIView

{
    UILabel *_timeLabel;
    UIImageView *_glyphImageView;
    NSString *_glyphName;
    unsigned long long _style;
}

@property (retain, nonatomic) UIImageView *glyphImageView;
@property (retain, nonatomic) NSString *glyphName;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) UILabel *timeLabel;

- (void)setupConstraints;
- (void)setupTimeLabelWithFont:(id)arg1 textColor:(id)arg2;
- (void)setupGlyphName:(id)arg1 size:(double)arg2 glyphColor:(id)arg3;
- (id)initWithFont:(id)arg1 textColor:(id)arg2 glyphName:(id)arg3 style:(unsigned long long)arg4;
- (void)setComponentColor:(id)arg1;

@end
