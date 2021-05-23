/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSSet, NSString, NSURL, NSValue;

@interface TDNamedAssetImportInfo : NSObject

{
    _Bool _preservesVectorRepresentation;
    _Bool _optOutOfThinning;
    _Bool _isFlippable;
    _Bool _cubeMap;
    short _autoscalingType;
    int _objectVersion;
    NSString *_name;
    long long _nameIdentifier;
    NSURL *_fileURL;
    NSDate *_modificationDate;
    long long _idiom;
    long long _subtype;
    unsigned long long _scaleFactor;
    long long _renditionType;
    long long _resizingMode;
    long long _templateRenderingMode;
    long long _sizeClassHorizontal;
    long long _sizeClassVertical;
    long long _displayGamut;
    long long _layoutDirection;
    unsigned long long _memoryClass;
    unsigned long long _graphicsClass;
    long long _graphicsFeatureSetClass;
    long long _compressionType;
    double _lossyCompressionQuality;
    NSSet *_tags;
    NSString *_universalTypeIdentifier;
    NSArray *_containedImageNames;
    NSArray *_layerReferences;
    unsigned long long _textureWidth;
    unsigned long long _textureHeight;
    unsigned long long _textureDepth;
    unsigned long long _arrayIndex;
    long long _texturePixelFormat;
    long long _textureInterpretation;
    NSArray *_textureInfos;
    long long _colorSpaceID;
    NSArray *_colorComponents;
    NSString *_systemColorName;
    NSString *_fontName;
    double _fontSize;
    NSString *_foregroundColorName;
    NSString *_backgroundColorName;
    long long _backgroundColorSpaceID;
    NSArray *_backgroundColorComponents;
    long long _textAlignment;
    long long _scalingStyle;
    double _maxPointSize;
    double _minPointSize;
    NSValue *_iconSize;
    NSString *_appearanceName;
    long long _appearanceIdentifier;
    NSString *_localizationName;
    long long _localizationIdentifier;
    struct CGSize _resizableSliceSize;
    struct CGSize _physicalSizeInMeters;
    struct CGSize _canvasSize;
    CDStruct_3c058996 _sliceInsets;
    struct CGRect _alignmentRect;
    CDStruct_14d5dc5e _transformation;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long nameIdentifier;
@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) long long idiom;
@property (nonatomic) long long subtype;
@property (nonatomic) unsigned long long scaleFactor;
@property (nonatomic) CDStruct_3c058996 sliceInsets;
@property (nonatomic) long long renditionType;
@property (nonatomic) long long resizingMode;
@property (nonatomic) struct CGSize resizableSliceSize;
@property (nonatomic) _Bool preservesVectorRepresentation;
@property (nonatomic) short autoscalingType;
@property (nonatomic) _Bool isTemplate;
@property (nonatomic) long long templateRenderingMode;
@property (nonatomic) _Bool optOutOfThinning;
@property (nonatomic) struct CGRect alignmentRect;
@property (nonatomic) long long sizeClassHorizontal;
@property (nonatomic) long long sizeClassVertical;
@property (nonatomic) long long displayGamut;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) _Bool isFlippable;
@property (nonatomic) unsigned long long memoryClass;
@property (nonatomic) unsigned long long graphicsClass;
@property (nonatomic) long long graphicsFeatureSetClass;
@property (nonatomic) long long compressionType;
@property (nonatomic) double lossyCompressionQuality;
@property (copy, nonatomic) NSSet *tags;
@property (copy, nonatomic) NSString *universalTypeIdentifier;
@property (copy, nonatomic) NSArray *containedImageNames;
@property (nonatomic) struct CGSize physicalSizeInMeters;
@property (nonatomic) CDStruct_14d5dc5e transformation;
@property (nonatomic) int objectVersion;
@property (nonatomic) struct CGSize canvasSize;
@property (copy, nonatomic) NSArray *layerReferences;
@property (nonatomic) unsigned long long textureWidth;
@property (nonatomic) unsigned long long textureHeight;
@property (nonatomic) unsigned long long textureDepth;
@property (nonatomic) _Bool cubeMap;
@property (nonatomic) unsigned long long arrayIndex;
@property (nonatomic) long long texturePixelFormat;
@property (nonatomic) long long textureInterpretation;
@property (copy, nonatomic) NSArray *textureInfos;
@property (nonatomic) long long colorSpaceID;
@property (copy, nonatomic) NSArray *colorComponents;
@property (retain, nonatomic) NSString *systemColorName;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *foregroundColorName;
@property (copy, nonatomic) NSString *backgroundColorName;
@property (nonatomic) long long backgroundColorSpaceID;
@property (copy, nonatomic) NSArray *backgroundColorComponents;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long scalingStyle;
@property (nonatomic) double maxPointSize;
@property (nonatomic) double minPointSize;
@property (copy, nonatomic) NSValue *iconSize;
@property (copy, nonatomic) NSString *appearanceName;
@property (nonatomic) long long appearanceIdentifier;
@property (copy, nonatomic) NSString *localizationName;
@property (nonatomic) long long localizationIdentifier;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)renditionSubtype;

@end
