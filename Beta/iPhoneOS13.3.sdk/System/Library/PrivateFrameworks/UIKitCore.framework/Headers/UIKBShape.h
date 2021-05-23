/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIKBGeometry;

@interface UIKBShape : NSObject <Swift>

{
    UIKBGeometry *m_geometry;
    struct CGRect m_frame;
    struct CGRect m_paddedFrame;
    unsigned long long m_concaveCorner;
    struct CGSize m_concaveCornerOffset;
    unsigned long long m_uid;
    _Bool m_scaled;
    UIKBShape *m_originalShape;
}

@property (nonatomic) _Bool scaled;
@property (retain, nonatomic) UIKBShape *originalShape;
@property (retain, nonatomic) UIKBGeometry *geometry;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGRect paddedFrame;
@property (nonatomic) unsigned long long concaveCorner;
@property (nonatomic) struct CGSize concaveCornerOffset;
@property (nonatomic, readonly) unsigned long long uid;

+ (id)shape;
+ (id)shapeByCombining:(id)arg1 withShape:(id)arg2;
+ (id)shapeByResizingShape:(id)arg1 byAmount:(struct CGSize)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5 absoluteOriginFactors:(_Bool)arg6;
- (struct CGRect)_scaleRect:(struct CGRect)arg1 inYAxis:(_Bool)arg2;
- (id)initWithGeometry:(id)arg1 frame:(struct CGRect)arg2 paddedFrame:(struct CGRect)arg3;
- (id)initWithGeometry:(id)arg1 frame:(struct CGRect)arg2 paddedFrame:(struct CGRect)arg3 concaveCorner:(unsigned long long)arg4 concaveCornerOffset:(struct CGSize)arg5;
- (void)makeLikeOther:(id)arg1;
- (void)setConcaveCornerSize:(struct CGSize)arg1;
- (_Bool)shouldUseGeometry;
- (void)addRectFrom:(id)arg1;
- (void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5;
- (void)addRectFrom:(id)arg1 mergeActionFactors:(id)arg2;
- (void)scaleWidth:(double)arg1;
- (void)scaleIfNeeded:(double)arg1 onlyYAxis:(_Bool)arg2;

@end
