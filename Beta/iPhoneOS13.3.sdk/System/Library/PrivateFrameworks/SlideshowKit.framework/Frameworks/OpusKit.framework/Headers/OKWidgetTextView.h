/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetTextViewProxy.h>

@class NSString, UITextView;

@interface OKWidgetTextView : OKWidgetTextViewProxy

{
    UITextView *_textView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (void)layoutSubviews;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)initWithWidget:(id)arg1;
- (id)settingFontName;
- (void)setSettingFontName:(id)arg1;
- (float)settingFontSize;
- (void)setSettingFontSize:(float)arg1;
- (id)settingTextColor;
- (void)setSettingTextColor:(id)arg1;
- (id)settingTextBackgroundColor;
- (void)setSettingTextBackgroundColor:(id)arg1;
- (long long)settingTextAlignment;
- (void)setSettingTextAlignment:(long long)arg1;
- (struct UIEdgeInsets)settingContentEdgeInsets;
- (void)setSettingContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)settingOverflowEnabled;
- (void)setSettingOverflowEnabled:(_Bool)arg1;
- (_Bool)settingScrollEnabled;
- (void)setSettingScrollEnabled:(_Bool)arg1;
- (id)settingText;
- (void)setSettingText:(id)arg1;
- (id)settingAttributedText;
- (void)setSettingAttributedText:(id)arg1;

@end
