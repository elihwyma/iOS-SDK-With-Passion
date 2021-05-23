/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSATSTypesetter;

@interface NSATSLineFragment : NSObject

{
    void *_line;
    NSATSTypesetter *_typesetter;
    struct _NSRange _glyphRange;
    struct _NSRange _characterRange;
    double _minPosition;
    double _maxPosition;
    long long _elasticCharIndex;
    double _elasticRangeWidth;
    unsigned int _hyphenGlyph;
    double _hyphenGlyphWidth;
    struct {
        unsigned int _directionState:2;
        unsigned int _drawsOutside:1;
        unsigned int _standaloneAttachment:1;
        unsigned int _reserved:28;
    } _flags;
}

@property (readonly, getter=isElasticOnly) _Bool elasticOnly;
@property (readonly, getter=isStandaloneTextAttachment) _Bool standaloneTextAttachment;

- (void)dealloc;
- (void)finalize;
- (void)_invalidate;
- (struct _NSRange)characterRange;
- (id)initWithTypesetter:(id)arg1;
- (void)layoutForStartingGlyphAtIndex:(unsigned long long)arg1 characterIndex:(unsigned long long)arg2 minPosition:(double)arg3 maxPosition:(double)arg4 lineFragmentRect:(struct CGRect)arg5;
- (struct _NSRange)glyphRange;
- (void)getTypographicLineHeight:(double *)arg1 baselineOffset:(double *)arg2 leading:(double *)arg3;
- (void)justifyWithFactor:(double)arg1;
- (double)lineWidthForType:(int)arg1;
- (void)resolveOpticalAlignmentUpdatingMinPosition:(double *)arg1 maxPosition:(double *)arg2;
- (_Bool)hasElasticRange;
- (void)saveMorphedGlyphs:(struct _NSRange *)arg1;
- (void)saveWithGlyphOrigin:(double)arg1;
- (id)_copyRenderingContextWithGlyphOrigin:(double)arg1;
- (void)_flushCachedObjects;
- (long long)resolvedLineBreakMode:(_Bool)arg1;
- (long long)_charIndexToBreakLineByWordWrappingAtIndex:(long long)arg1 lineFragmentWidth:(double)arg2 hyphenate:(_Bool *)arg3;

@end
