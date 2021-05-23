/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUINamedLookup.h>

@interface CUINamedImage : CUINamedLookup

{
    double _scale;
    struct _cuiniproperties {
        unsigned int isVectorBased:1;
        unsigned int hasSliceInformation:1;
        unsigned int hasAlignmentInformation:1;
        unsigned int resizingMode:2;
        unsigned int templateRenderingMode:3;
        unsigned int exifOrientation:4;
        unsigned int isAlphaCropped:1;
        unsigned int isFlippable:1;
        unsigned int isTintable:1;
        unsigned int preservedVectorRepresentation:1;
        unsigned int _reserved:16;
    } _imageProperties;
}

@property (nonatomic, readonly) struct CGImage *image;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) CDStruct_3c058996 edgeInsets;
@property (nonatomic, readonly) long long resizingMode;
@property (nonatomic, readonly) double opacity;
@property (nonatomic, readonly) CDStruct_3c058996 alignmentEdgeInsets;
@property (nonatomic, readonly) int blendMode;
@property (nonatomic, readonly) _Bool hasSliceInformation;
@property (nonatomic, readonly) _Bool hasAlignmentInformation;
@property (nonatomic, readonly) _Bool isVectorBased;
@property (nonatomic, readonly) _Bool preservedVectorRepresentation;
@property (nonatomic, readonly) _Bool isTemplate;
@property (nonatomic, readonly) long long templateRenderingMode;
@property (nonatomic, readonly) _Bool isStructured;
@property (nonatomic, readonly) _Bool isFlippable;
@property (nonatomic, readonly) int exifOrientation;
@property (nonatomic, readonly) _Bool isAlphaCropped;
@property (nonatomic, readonly) struct CGImage *croppedImage;

- (id)description;
- (id)baseKey;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (struct CGSize)originalUncroppedSize;
- (struct CGImage *)createImageFromPDFRenditionWithScale:(double)arg1;
- (double)positionOfSliceBoundary:(unsigned int)arg1;
- (_Bool)_cacheRenditionProperties;
- (struct CGRect)alphaCroppedRect;
- (long long)resizingModeWithSubtype:(long long)arg1;

@end
