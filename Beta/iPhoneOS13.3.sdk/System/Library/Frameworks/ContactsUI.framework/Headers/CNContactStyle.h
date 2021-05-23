/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

@interface CNContactStyle : NSObject

{
    _Bool _usesOpaqueBackground;
    _Bool _usesTranslucentBarStyle;
    _Bool _shouldPresentInCurrentContext;
    _Bool _blurSupported;
    UIColor *_textColor;
    UIColor *_sectionHeaderTextColor;
    UIColor *_taglineTextColor;
    UIColor *_disabledTextColor;
    UIColor *_placeholderTextColor;
    UIColor *_highlightedTextColor;
    UIColor *_suggestedLabelTextColor;
    UIColor *_suggestedValueTextColor;
    UIColor *_readOnlyTextColor;
    UIColor *_notesTextColor;
    UIColor *_backgroundColor;
    UIColor *_sectionIndexBackgroundColor;
    long long _separatorBackdropOverlayBlendMode;
    UIColor *_searchBarBackgroundColor;
    UIColor *_transportBackgroundColor;
    UIColor *_transportBorderColor;
    UIColor *_transportBoldBackgroundColor;
    UIColor *_contactHeaderBackgroundColor;
    UIColor *_contactHeaderDropShadowColor;
    UIColor *_tintColorOverride;
    UIColor *_headerBackgroundColor;
    UIColor *_separatorColor;
    long long _separatorStyle;
    UIColor *_sectionBackgroundColor;
    UIColor *_selectedCellBackgroundColor;
    UIColor *_groupedBackgroundColor;
    long long _barStyle;
    long long _keyboardAppearance;
    long long _modalTransitionStyle;
    long long _topActionsViewStyle;
    long long _inlineActionsViewStyle;
    struct UIEdgeInsets _separatorInset;
}

@property (nonatomic, readonly) UIFont *textFont;
@property (nonatomic, readonly) UIFont *boldTextFont;
@property (nonatomic) long long topActionsViewStyle;
@property (nonatomic) long long inlineActionsViewStyle;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *sectionHeaderTextColor;
@property (retain, nonatomic) UIColor *taglineTextColor;
@property (retain, nonatomic) UIColor *disabledTextColor;
@property (retain, nonatomic) UIColor *placeholderTextColor;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (retain, nonatomic) UIColor *suggestedLabelTextColor;
@property (retain, nonatomic) UIColor *suggestedValueTextColor;
@property (retain, nonatomic) UIColor *readOnlyTextColor;
@property (retain, nonatomic) UIColor *notesTextColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *sectionIndexBackgroundColor;
@property (nonatomic) _Bool usesOpaqueBackground;
@property (nonatomic) long long separatorBackdropOverlayBlendMode;
@property (retain, nonatomic) UIColor *searchBarBackgroundColor;
@property (retain, nonatomic) UIColor *transportBackgroundColor;
@property (retain, nonatomic) UIColor *transportBorderColor;
@property (retain, nonatomic) UIColor *transportBoldBackgroundColor;
@property (retain, nonatomic) UIColor *contactHeaderBackgroundColor;
@property (retain, nonatomic) UIColor *contactHeaderDropShadowColor;
@property (retain, nonatomic) UIColor *tintColorOverride;
@property (retain, nonatomic) UIColor *headerBackgroundColor;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) struct UIEdgeInsets separatorInset;
@property (retain, nonatomic) UIColor *sectionBackgroundColor;
@property (retain, nonatomic) UIColor *selectedCellBackgroundColor;
@property (retain, nonatomic) UIColor *groupedBackgroundColor;
@property (nonatomic) long long barStyle;
@property (nonatomic) _Bool usesTranslucentBarStyle;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) _Bool shouldPresentInCurrentContext;
@property (nonatomic) _Bool blurSupported;
@property (nonatomic) long long modalTransitionStyle;

+ (_Bool)supportsSecureCoding;
+ (id)defaultStyle;
+ (void)setCurrentStyle:(id)arg1;
+ (id)currentStyle;
+ (id)darkStyle;
+ (id)faceTimeStyle;
+ (id)watchStyle;
+ (id)siriStyle;
+ (id)testStyle;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
