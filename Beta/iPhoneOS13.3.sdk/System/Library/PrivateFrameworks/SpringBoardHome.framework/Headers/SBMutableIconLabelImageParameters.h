/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIconLabelImageParameters.h>

@class NSString, UIColor, UIFont;

@interface SBMutableIconLabelImageParameters : SBIconLabelImageParameters

@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct CGSize maxSize;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double scale;
@property (nonatomic) _Bool containsEmoji;
@property (nonatomic) _Bool canTruncate;
@property (nonatomic) _Bool canTighten;
@property (nonatomic) long long legibilityStyle;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic, getter=isAccessibilityReduceTransparencyEnabled) _Bool accessibilityReduceTransparencyEnabled;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (retain, nonatomic) UIColor *focusHighlightColor;
@property (nonatomic) struct UIEdgeInsets textInsets;
@property (nonatomic) struct UIEdgeInsets fontLanguageInsets;
@property (copy, nonatomic) NSString *iconLocation;

- (id)copy;

@end
