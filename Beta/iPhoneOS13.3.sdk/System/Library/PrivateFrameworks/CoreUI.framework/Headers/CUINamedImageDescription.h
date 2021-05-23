/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CUINamedImageDescription : NSObject

{
    double _scale;
    long long _idiom;
    long long _subtype;
    long long _sizeClassHorizontal;
    long long _sizeClassVertical;
    long long _displayGamut;
    long long _layoutDirection;
    int _blendMode;
    long long _templateRenderingMode;
    long long _imageType;
    CDStruct_3c058996 _edgeInsets;
    CDStruct_3c058996 _alignmentEdgeInsets;
    long long _resizingMode;
    int _exifOrientation;
    NSString *_appearanceName;
}

@property (nonatomic) double scale;
@property (nonatomic) long long idiom;
@property (nonatomic) long long subtype;
@property (nonatomic) long long sizeClassHorizontal;
@property (nonatomic) long long sizeClassVertical;
@property (nonatomic) int blendMode;
@property (nonatomic) _Bool isTemplate;
@property (nonatomic) long long templateRenderingMode;
@property (nonatomic) long long imageType;
@property (nonatomic) CDStruct_3c058996 edgeInsets;
@property (nonatomic) CDStruct_3c058996 alignmentEdgeInsets;
@property (nonatomic) long long resizingMode;
@property (nonatomic) int exifOrientation;
@property (nonatomic) long long displayGamut;
@property (nonatomic) long long layoutDirection;
@property (copy, nonatomic) NSString *appearanceName;

- (void)dealloc;
- (id)description;

@end
