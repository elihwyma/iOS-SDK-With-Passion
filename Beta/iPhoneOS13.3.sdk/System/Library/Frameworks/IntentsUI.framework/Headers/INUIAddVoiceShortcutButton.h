/*
 Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

#import <UIKit/UIButton.h>

@class CAFilter, INShortcut, INVoiceShortcut, NSLayoutConstraint, NSString, UIImageView, UILabel;

@protocol INUIAddVoiceShortcutButtonDelegate;

@interface INUIAddVoiceShortcutButton : UIButton

{
    unsigned long long _style;
    id <INUIAddVoiceShortcutButtonDelegate> _delegate;
    INShortcut *_shortcut;
    double _cornerRadius;
    INVoiceShortcut *_voiceShortcut;
    CAFilter *_highlightFilter;
    UIImageView *_sphiriImageView;
    UIImageView *_checkmarkImageView;
    UILabel *_addToSiriLabel;
    UILabel *_phraseLabel;
    NSLayoutConstraint *_checkmarkHeightConstraint;
    NSLayoutConstraint *_addToSiriLeadingConstraint;
    NSLayoutConstraint *_addedToSiriLeadingConstraint;
}

@property (retain, nonatomic) INVoiceShortcut *voiceShortcut;
@property (retain, nonatomic) CAFilter *highlightFilter;
@property (weak, nonatomic) UIImageView *sphiriImageView;
@property (weak, nonatomic) UIImageView *checkmarkImageView;
@property (weak, nonatomic) UILabel *addToSiriLabel;
@property (weak, nonatomic) UILabel *phraseLabel;
@property (retain, nonatomic) NSLayoutConstraint *checkmarkHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *addToSiriLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *addedToSiriLeadingConstraint;
@property (nonatomic, readonly) unsigned long long style;
@property (weak, nonatomic) id <INUIAddVoiceShortcutButtonDelegate> delegate;
@property (retain, nonatomic) INShortcut *shortcut;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (id)accessibilityLabel;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)_configureWithStyle:(unsigned long long)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)_updateColors;
- (void)prepareForInterfaceBuilder;
- (void)_didTapButton;
- (id)_backgroundColorForStyle:(unsigned long long)arg1;
- (id)_textColorForStyle:(unsigned long long)arg1;
- (id)_strokeColorForStyle:(unsigned long long)arg1;
- (double)_strokeWidthForStyle:(unsigned long long)arg1;
- (void)_createHighlightFilterIfNecessary;
- (id)_addToSiriText;
- (id)_addedToSiriText;
- (id)_phraseText;
- (id)_addToSiriFont;
- (id)_phraseFont;
- (_Bool)_shouldUseLargerFont;
- (id)_sphiriImage;
- (id)_dynamicWhiteColor;
- (id)_dynamicBlackColor;
- (id)_dynamicColorWithLightColor:(id)arg1 darkColor:(id)arg2;
- (void)_updateContent;
- (void)_updatePhraseVisibility;
- (void)_checkAndUpdateForShortcut;
- (void)_handleVoiceShortcutUpdateNotification:(id)arg1;

@end
