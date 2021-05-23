/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSTextStorage.h>

@class CUICatalog, CUIStyleEffectConfiguration, NSConcreteNotifyingMutableAttributedString, NSLayoutManager, NSString, NSTextContainer;

@interface NSStringDrawingTextStorage : NSTextStorage

{
    NSConcreteNotifyingMutableAttributedString *_contents;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    double _baselineDelta;
    struct {
        unsigned int _typesetterBehavior:4;
        unsigned int _needToFlushCache:1;
        unsigned int _baselineMode:1;
        unsigned int _forceWordWrapping:1;
        unsigned int _usesSimpleTextEffects:1;
        unsigned int _applicationFrameworkContext:3;
        unsigned int _reserved:21;
    } _sdflags;
    CUICatalog *_catalog;
    CUIStyleEffectConfiguration *_styleEffects;
    double _defaultTighteningFactor;
}

@property (retain, nonatomic) CUICatalog *cuiCatalog;
@property (retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (nonatomic, getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) _Bool usesSimpleTextEffects;
@property double defaultTighteningFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (void)_setHasCustomSettings:(_Bool)arg1;
+ (_Bool)_hasCustomSettings;
+ (id)stringDrawingTextStorage;

- (id)init;
- (id)string;
- (void)dealloc;
- (unsigned long long)length;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (id)layoutManager;
- (id)textContainer;
- (_Bool)_isStringDrawingTextStorage;
- (long long)typesetterBehavior;
- (void)_setBaselineDelta:(double)arg1;
- (_Bool)_baselineMode;
- (_Bool)_forceWordWrapping;
- (void)_setForceWordWrapping:(_Bool)arg1;
- (void)processEditing;
- (long long)_applicationFrameworkContext;
- (struct CGRect)usedRectForTextContainer:(id)arg1;
- (_Bool)_shouldSetOriginalFontAttribute;
- (id)textContainerForAttributedString:(id)arg1 containerSize:(struct CGSize)arg2 lineFragmentPadding:(double)arg3;
- (void)_setBaselineMode:(_Bool)arg1;
- (void)_setApplicationFrameworkContext:(long long)arg1;
- (void)drawTextContainer:(id)arg1 range:(struct _NSRange)arg2 withRect:(struct CGRect)arg3 graphicsContext:(struct CGContext *)arg4 baselineMode:(_Bool)arg5 scrollable:(_Bool)arg6 padding:(double)arg7;
- (double)_baselineDelta;
- (struct CGPoint)defaultTextContainerOriginForRect:(struct CGRect)arg1;
- (void)setGraphicsContext:(id)arg1;
- (void)drawTextContainer:(id)arg1 withRect:(struct CGRect)arg2 graphicsContext:(struct CGContext *)arg3 baselineMode:(_Bool)arg4 scrollable:(_Bool)arg5 padding:(double)arg6;
- (id)textContainerForAttributedString:(id)arg1;
- (void)fontSetChanged;

@end
