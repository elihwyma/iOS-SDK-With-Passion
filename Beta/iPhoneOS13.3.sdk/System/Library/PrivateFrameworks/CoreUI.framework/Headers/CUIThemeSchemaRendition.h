/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <CoreUI/CUIThemeRendition.h>

@class CUIPSDGradient, NSDictionary;

@interface CUIThemeSchemaRendition : CUIThemeRendition

{
    NSDictionary *cuiInfo;
    unsigned long long _nimages;
    struct CGImage *_image[9];
    struct CGRect _layoutRects[9];
    struct CGSize _intrinsicSize;
    struct CGRect _elementRect;
    long long _columnSlices;
    long long _rowSlices;
    CDStruct_3c058996 _contentInsets;
    CUIPSDGradient *_gradient;
}

@property (nonatomic, readonly) unsigned long long numberOfSlices;
@property (nonatomic, readonly) struct CGRect *sliceRects;
@property (nonatomic, readonly) CUIPSDGradient *gradient;

- (void)dealloc;
- (id)description;
- (unsigned short)identifier;
- (unsigned short)size;
- (unsigned short)value;
- (unsigned short)state;
- (double)scale;
- (unsigned short)direction;
- (unsigned short)previousState;
- (unsigned short)appearance;
- (unsigned short)layer;
- (CDStruct_3c058996)contentInsets;
- (id)stringForState:(unsigned short)arg1;
- (id)slices;
- (unsigned short)previousValue;
- (unsigned short)drawingLayer;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;
- (id)referenceImage;
- (unsigned short)dimension1;
- (unsigned short)presentationState;
- (unsigned short)dimension2;
- (unsigned short)keyScale;
- (id)stringForValue:(unsigned short)arg1;
- (unsigned short)look;
- (id)initWithCoreUIOptions:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2;
- (struct CGRect)alignmentRectangle;
- (struct CGRect)edgeInsets:(_Bool)arg1;
- (id)coreUIOptions;
- (id)defaultTemplateName;
- (long long)columnSlices;
- (long long)rowSlices;
- (struct CGPoint)renditionCoordinatesForPartFeatures:(long long)arg1;
- (unsigned short)localization;
- (id)typeLocalizedString;
- (id)stateLocalizedString;
- (id)previousStateLocalizedString;
- (id)directionLocalizedString;
- (id)valueLocalizedString;
- (id)previousValueLocalizedString;
- (id)sizeLocalizedString;
- (id)presentationStateLocalizedString;
- (id)dimension1LocalizedString;
- (id)dimension2LocalizedString;
- (id)drawingLayerLocalizedString;
- (id)lookLocalizedString;
- (id)scaleLocalizedString;

@end
