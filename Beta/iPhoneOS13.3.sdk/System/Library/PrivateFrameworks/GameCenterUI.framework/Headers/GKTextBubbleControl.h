/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKBaseBubbleWithTextControl.h>

@class GKLabel, GKTextStyle, NSAttributedString, NSString;

@interface GKTextBubbleControl : GKBaseBubbleWithTextControl

{
    _Bool _smallText;
    NSString *_text;
    GKTextStyle *_overrideTextStyle;
    GKLabel *_textLabel;
    GKLabel *_textStyle;
}

@property (retain, nonatomic) GKLabel *textLabel;
@property (retain, nonatomic) GKLabel *textStyle;
@property (nonatomic) _Bool smallText;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) GKTextStyle *overrideTextStyle;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateTextFieldsFor3DScaling;
- (void)_updateTextLabel;

@end
