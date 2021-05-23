/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSValue;

__attribute__((visibility("hidden")))
@interface UIKBRenderGeometry : NSObject <Swift>

{
    _Bool _detachedVariants;
    _Bool _tallPopup;
    int _popupBias;
    unsigned long long _concaveCorner;
    unsigned long long _roundRectCorners;
    double _roundRectRadius;
    long long _flickDirection;
    NSValue *_splitLeftRect;
    NSValue *_splitRightRect;
    struct CGPoint _popupSource;
    struct CGSize _concaveCornerOffset;
    struct CGRect _frame;
    struct CGRect _paddedFrame;
    struct CGRect _displayFrame;
    struct CGRect _symbolFrame;
    struct UIEdgeInsets _layoutMargins;
}

@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGRect paddedFrame;
@property (nonatomic) struct CGRect displayFrame;
@property (nonatomic) struct CGRect symbolFrame;
@property (nonatomic) unsigned long long concaveCorner;
@property (nonatomic) struct CGSize concaveCornerOffset;
@property (nonatomic) struct CGPoint popupSource;
@property (nonatomic) double roundRectRadius;
@property (nonatomic) unsigned long long roundRectCorners;
@property (nonatomic) int popupBias;
@property (nonatomic) struct UIEdgeInsets layoutMargins;
@property (nonatomic) long long flickDirection;
@property (nonatomic) _Bool detachedVariants;
@property (nonatomic) _Bool tallPopup;
@property (retain, nonatomic) NSValue *splitLeftRect;
@property (retain, nonatomic) NSValue *splitRightRect;
@property (nonatomic, readonly) struct UIEdgeInsets displayInsets;
@property (nonatomic, readonly) struct UIEdgeInsets paddedInsets;

+ (id)geometryWithFrame:(struct CGRect)arg1 paddedFrame:(struct CGRect)arg2;
+ (id)geometryWithShape:(id)arg1;
+ (id)sortedGeometries:(id)arg1 leftToRight:(_Bool)arg2;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)adjustForTranslucentGapsWithSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;
- (unsigned long long)adjustForTranslucentGapsInFrameWithSize_10Key:(struct CGSize)arg1 centerX:(double)arg2 bottomEdge:(_Bool)arg3 topEdge:(_Bool)arg4;
- (void)adjustForConsistentGapsWithSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;
- (void)applyInsets:(struct UIEdgeInsets)arg1;
- (id)iPhoneVariantGeometries:(unsigned long long)arg1 annotationIndex:(unsigned long long)arg2;
- (id)similarShape;
- (id)iPadVariantGeometries:(unsigned long long)arg1 rowLimit:(long long)arg2;
- (id)_copyForDirection:(long long)arg1 positionFactor:(double)arg2 inwardSizeFactor:(double)arg3 outwardSizeFactor:(double)arg4 perpendicularSizeFactor:(double)arg5 sizeAspectRatio:(double)arg6 scale:(double)arg7;
- (void)applyOffset:(struct CGPoint)arg1;
- (void)makeIntegralWithScale:(double)arg1;
- (void)adjustToTopWithInsets:(struct UIEdgeInsets)arg1;
- (id)copyForFlickDirection:(long long)arg1 scale:(double)arg2;
- (id)copyForPopupDirection:(long long)arg1 scale:(double)arg2;
- (id)initWithShape:(id)arg1;
- (void)overlayWithGeometry:(id)arg1;
- (void)applyShadowInsets:(struct UIEdgeInsets)arg1;

@end
