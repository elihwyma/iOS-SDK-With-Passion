/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

@interface SBIconLabelImageParameters : NSObject

{
    UIFont *_font;
    NSString *_text;
    _Bool _containsEmoji;
    _Bool _canTruncate;
    _Bool _canTighten;
    _Bool _recalculateHash;
    _Bool _accessibilityReduceTransparencyEnabled;
    NSString *_contentSizeCategory;
    double _scale;
    struct CGSize _maxSize;
    long long _legibilityStyle;
    UIColor *_textColor;
    UIColor *_focusHighlightColor;
    struct UIEdgeInsets _textInsets;
    struct UIEdgeInsets _fontLanguageInsets;
    NSString *_iconLocation;
    unsigned long long _hash;
}

@property (copy, nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) struct CGSize maxSize;
@property (nonatomic, readonly) UIFont *font;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) _Bool canTruncate;
@property (nonatomic, readonly) _Bool canTighten;
@property (nonatomic, readonly) _Bool containsEmoji;
@property (nonatomic, readonly) long long legibilityStyle;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly, getter=isAccessibilityReduceTransparencyEnabled) _Bool accessibilityReduceTransparencyEnabled;
@property (copy, nonatomic, readonly) NSString *contentSizeCategory;
@property (nonatomic, readonly) UIColor *focusHighlightColor;
@property (nonatomic, readonly) struct UIEdgeInsets textInsets;
@property (nonatomic, readonly) struct UIEdgeInsets fontLanguageInsets;
@property (copy, nonatomic, readonly) NSString *iconLocation;
@property (nonatomic, readonly, getter=isColorspaceGrayscale) _Bool colorspaceGrayscale;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithParameters:(id)arg1;
- (void)_noteNeedsHashRecalculation;

@end
