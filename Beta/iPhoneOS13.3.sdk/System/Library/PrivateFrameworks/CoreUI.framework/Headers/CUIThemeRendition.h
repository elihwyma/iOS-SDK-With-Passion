/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface CUIThemeRendition : NSObject

{
    struct _renditionkeytoken _stackKey[22];
    struct _renditionkeytoken *_key;
    long long _type;
    unsigned int _subtype;
    unsigned int _scale;
    int _exifOrientation;
    int _blendMode;
    struct cuithemerenditionrenditionflags _renditionFlags;
    long long _templateRenderingMode;
    long long _artworkStatus;
    unsigned long long _colorSpaceID;
    NSString *_name;
    NSData *_srcData;
    double _opacity;
    NSString *_utiType;
    struct CGImage *_uncroppedImage;
    struct CGSize _physicalSizeInMeters;
    NSDictionary *_properties;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned int subtype;
@property (nonatomic) unsigned int internalScale;
@property (nonatomic) long long internalTemplateRenderingMode;
@property (retain, nonatomic) NSString *internalName;
@property (nonatomic, readonly) NSData *srcData;
@property (nonatomic) long long artworkStatus;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) int exifOrientation;

+ (id)displayNameForRenditionType:(long long)arg1;
+ (Class)renditionClassForRenditionType:(long long)arg1 andPixelFormat:(unsigned int)arg2;

- (void)dealloc;
- (id)description;
- (id)name;
- (const struct _renditionkeytoken *)key;
- (void)setName:(id)arg1;
- (id)data;
- (double)scale;
- (struct CGColor *)cgColor;
- (_Bool)isOpaque;
- (id)properties;
- (int)pixelFormat;
- (id)metrics;
- (id)utiType;
- (struct CGPDFDocument *)pdfDocument;
- (struct CGSVGDocument *)svgDocument;
- (long long)templateRenderingMode;
- (id)gradient;
- (_Bool)isFlippable;
- (_Bool)substituteWithSystemColor;
- (id)systemColorName;
- (struct CGImage *)uncroppedImage;
- (struct CGSize)physicalSizeInMeters;
- (double)vectorGlyphBaseline;
- (double)vectorGlyphCapLine;
- (double)vectorGlyphReferencePointSize;
- (id)vectorGlyphAvailableSizes;
- (CDStruct_3c058996)vectorGlyphAlignmentRectInsets;
- (id)contentNames;
- (id)layerReferences;
- (struct CGImage *)unslicedImage;
- (id)linkingToRendition;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (unsigned short)valueForTokenIdentifier:(unsigned short)arg1;
- (id)sizeIndexes;
- (_Bool)optOutOfThinning;
- (_Bool)preservedVectorRepresentation;
- (_Bool)isTintable;
- (unsigned int)gradientStyle;
- (unsigned long long)colorSpaceID;
- (_Bool)isVectorBased;
- (id)effectPreset;
- (struct CGSize)originalUncroppedSize;
- (int)objectVersion;
- (CDStruct_14d5dc5e)transformation;
- (id)modelAsset;
- (id)modelMesh;
- (id)modelSubmesh;
- (void)_setStructuredThemeStore:(id)arg1;
- (id)_initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (const struct _csitextstyle *)csiTextStyle;
- (void)_initializeRenditionKey:(const struct _renditionkeytoken *)arg1;
- (struct CGImage *)createImageFromPDFRenditionWithScale:(double)arg1;
- (id)assetPackIdentifier;
- (id)externalTags;
- (_Bool)isTiled;
- (id)imageForSliceIndex:(long long)arg1;
- (_Bool)isScaled;
- (id)maskForSliceIndex:(long long)arg1;
- (_Bool)edgesOnly;
- (id)sliceInformation;
- (double)gradientDrawingAngle;
- (struct cuithemerenditionrenditionflags *)renditionFlags;
- (void)_initalizeMetadataFromCSIData:(const struct _csiheader *)arg1;
- (id)provideTextureInfo;
- (struct CGRect)alphaCroppedRect;
- (_Bool)isHeaderFlaggedFPO;
- (unsigned long long)sourceRowbytes;
- (struct CGSize)unslicedSize;
- (id)mipLevels;
- (id)textureImages;
- (void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1;
- (id)_sourceRendition;
- (int)bitmapEncoding;
- (struct CGRect)_destinationFrame;
- (_Bool)isInternalLink;
- (void)_initializeCompositingOptionsFromCSIData:(const struct _csiheader *)arg1;
- (void)_initializePropertiesFromCSIData:(const struct _csiheader *)arg1;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;

@end
