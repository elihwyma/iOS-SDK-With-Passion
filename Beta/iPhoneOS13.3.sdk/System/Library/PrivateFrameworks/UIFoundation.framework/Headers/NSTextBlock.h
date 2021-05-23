/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

#import <UIFoundation/Swift-Protocol.h>

@interface NSTextBlock : NSObject <Swift>

{
    void *_propVals;
    unsigned long long _propMask;
    unsigned long long _typeMask;
    id _primParamVal;
    id _otherParamVals;
    void *_blockPrimary;
    void *_blockSecondary;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)drawBackgroundWithFrame:(struct CGRect)arg1 inView:(id)arg2 characterRange:(struct _NSRange)arg3 layoutManager:(id)arg4;
- (double)widthForLayer:(long long)arg1 edge:(unsigned long long)arg2;
- (double)valueForDimension:(unsigned long long)arg1;
- (unsigned long long)widthValueTypeForLayer:(long long)arg1 edge:(unsigned long long)arg2;
- (unsigned long long)valueTypeForDimension:(unsigned long long)arg1;
- (void)_destroyFloatStorage;
- (void)_createFloatStorage;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (void)_setValue:(double)arg1 type:(unsigned long long)arg2 forParameter:(unsigned long long)arg3;
- (double)_valueForParameter:(unsigned long long)arg1;
- (unsigned long long)_valueTypeForParameter:(unsigned long long)arg1;
- (void)setValue:(double)arg1 type:(unsigned long long)arg2 forDimension:(unsigned long long)arg3;
- (void)setWidth:(double)arg1 type:(unsigned long long)arg2 forLayer:(long long)arg3 edge:(unsigned long long)arg4;
- (void)setBorderColor:(id)arg1 forEdge:(unsigned long long)arg2;
- (unsigned long long)verticalAlignment;
- (id)backgroundColor;
- (id)borderColorForEdge:(unsigned long long)arg1;
- (void)setContentWidth:(double)arg1 type:(unsigned long long)arg2;
- (double)contentWidth;
- (unsigned long long)contentWidthValueType;
- (void)setWidth:(double)arg1 type:(unsigned long long)arg2 forLayer:(long long)arg3;
- (void)setVerticalAlignment:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (struct CGRect)rectForLayoutAtPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 textContainer:(id)arg3 characterRange:(struct _NSRange)arg4;
- (struct CGRect)boundsRectForContentRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2 textContainer:(id)arg3 characterRange:(struct _NSRange)arg4;
- (id)_attributeDescription;

@end
