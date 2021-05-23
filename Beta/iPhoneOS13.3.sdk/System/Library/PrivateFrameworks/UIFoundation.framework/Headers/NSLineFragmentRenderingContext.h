/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class CUICatalog, CUIStyleEffectConfiguration, NSString, __NSImmutableTextStorage;

@interface NSLineFragmentRenderingContext : NSObject

{
    void *_runs;
    long long _numRuns;
    unsigned short *_glyphs;
    struct CGSize *_advancements;
    double _leftSideDelta;
    double _lineWidth;
    double _leftControlWidth;
    double _rightControlWidth;
    double _elasticWidth;
    struct CGRect _imageBounds;
    struct {
        unsigned int _isRTL:1;
        unsigned int _vAdvance:1;
        unsigned int _flipped:1;
        unsigned int _usesSimpleTextEffects:1;
        unsigned int _applicationFrameworkContext:3;
        unsigned int _reserved:25;
    } _flags;
    long long _resolvedDirection;
    long long _resolvedAlignment;
    CUICatalog *_catalog;
    CUIStyleEffectConfiguration *_styleEffects;
    __NSImmutableTextStorage *_textStorage;
}

@property long long resolvedTextAlignment;
@property long long resolvedBaseWritingDirection;
@property (retain, nonatomic) CUICatalog *cuiCatalog;
@property (retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (nonatomic, getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) _Bool usesSimpleTextEffects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property long long applicationFrameworkContext;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;

- (void)dealloc;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (void)finalize;
- (id)initWithTextStorage:(id)arg1 runs:(struct __CFArray *)arg2 glyphOrigin:(double)arg3 lineFragmentWidth:(double)arg4 elasticWidth:(double)arg5 usesScreenFonts:(_Bool)arg6 isRTL:(_Bool)arg7;
- (void)drawAtPoint:(struct CGPoint)arg1 inContext:(struct CGContext *)arg2;
- (struct CGSize)sizeWithBehavior:(long long)arg1 usesFontLeading:(_Bool)arg2 baselineDelta:(double *)arg3;
- (void)getMaximumAscender:(double *)arg1 minimumDescender:(double *)arg2;
- (double)lineFragmentWidth;
- (double)elasticWidth;
- (_Bool)isRTL;
- (struct CGRect)imageBounds;

@end
