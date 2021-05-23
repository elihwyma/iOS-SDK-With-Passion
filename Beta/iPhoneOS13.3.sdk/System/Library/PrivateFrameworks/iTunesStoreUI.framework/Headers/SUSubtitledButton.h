/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIButton.h>

@class NSString, UIColor, UILabel;

@interface SUSubtitledButton : UIButton

{
    struct __CFDictionary *_subtitleContentLookup;
    UILabel *_subtitleView;
}

@property (retain, nonatomic, readonly) NSString *currentSubtitle;
@property (retain, nonatomic, readonly) UIColor *currentSubtitleColor;
@property (retain, nonatomic, readonly) UIColor *currentSubtitleShadowColor;
@property (retain, nonatomic, readonly) UILabel *subtitleLabel;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (id)_subtitleFont;
- (void)setSubtitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSubtitleShadowColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSubtitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setupSubtitleView;
- (struct CGRect)subtitleRectForContentRect:(struct CGRect)arg1;
- (long long)_subtitleLineBreakMode;
- (void)configureFromScriptButton:(id)arg1;
- (id)subtitleForState:(unsigned long long)arg1;
- (id)subtitleColorForState:(unsigned long long)arg1;
- (id)subtitleShadowColorForState:(unsigned long long)arg1;
- (id)_subtitledContentForState:(unsigned long long)arg1;

@end
