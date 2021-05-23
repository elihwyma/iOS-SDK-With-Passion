/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <IconServices/ISImage.h>

__attribute__((visibility("hidden")))
@interface ISSymbolImage : ISImage

{
    struct CGImage *_internalCGImage;
    double _internalScale;
    struct CGSize _internalSize;
    _Bool _flippable;
    double _pointSize;
    unsigned long long _symbolSize;
    long long _symbolWeight;
    double _referencePointSize;
    double _fontMatchingScaleFactor;
    double _baselineOffset;
    double _capHeight;
    struct CGRect _alignmentRect;
    struct CGRect _contentBounds;
}

@property (nonatomic, readonly) double pointSize;
@property (nonatomic, readonly) unsigned long long symbolSize;
@property (nonatomic, readonly) long long symbolWeight;
@property (nonatomic, readonly) double referencePointSize;
@property (nonatomic, readonly) double fontMatchingScaleFactor;
@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic, readonly) double capHeight;
@property (nonatomic, readonly) struct CGRect alignmentRect;
@property (nonatomic, readonly) struct CGRect contentBounds;
@property (nonatomic, readonly, getter=isFlippable) _Bool flippable;

- (void)dealloc;
- (struct CGSize)size;
- (double)scale;
- (_Bool)placeholder;
- (struct CGImage *)cgImage;
- (id)initWithNamedVectorGlyph:(id)arg1;

@end
