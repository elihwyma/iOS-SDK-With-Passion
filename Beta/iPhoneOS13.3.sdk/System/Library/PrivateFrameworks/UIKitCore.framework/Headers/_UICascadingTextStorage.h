/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIFoundation/NSConcreteTextStorage.h>

@class NSDictionary, NSMutableDictionary, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface _UICascadingTextStorage : NSConcreteTextStorage

{
    NSMutableDictionary *_defaultAttributes;
}

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double shadowBlur;
@property (copy, nonatomic) NSDictionary *defaultAttributes;

+ (id)defaultFont;

- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (_Bool)_shouldSetOriginalFontAttribute;
- (long long)_ui_resolvedTextAlignment;
- (id)_defaultAttributes;
- (id)_shadow;
- (void)_restoreOriginalFontAttribute;
- (void)_setShadow:(id)arg1;

@end
