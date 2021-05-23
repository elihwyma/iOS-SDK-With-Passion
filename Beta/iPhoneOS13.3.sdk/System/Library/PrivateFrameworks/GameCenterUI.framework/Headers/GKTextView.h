/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UITextView.h>

@class GKLabel, GKTextStyle, NSAttributedString, NSString;

@interface GKTextView : UITextView

{
    GKTextStyle *__baseStyle;
    GKTextStyle *_appliedStyle;
    GKLabel *_placeholderLabel;
}

@property (retain, nonatomic) GKTextStyle *appliedStyle;
@property (nonatomic) GKLabel *placeholderLabel;
@property (retain, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) NSAttributedString *attributedPlaceholderText;
@property (retain, nonatomic) GKTextStyle *_baseStyle;

+ (void)initialize;

- (void)dealloc;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setAttributedText:(id)arg1;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (id)insertDictationResultPlaceholder;
- (void)applyTextStyle:(id)arg1;
- (void)replayAndApplyStyle;
- (void)updatePlaceholderVisibility;
- (void)textStorageDidChangeNotification:(id)arg1;

@end
