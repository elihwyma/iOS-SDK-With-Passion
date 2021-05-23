/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSValue.h>

@interface NSValue (AXMGeomerty)

@property (nonatomic, readonly) struct CGPoint AXMPointValue;
@property (nonatomic, readonly) struct CGVector AXMVectorValue;
@property (nonatomic, readonly) struct CGSize AXMSizeValue;
@property (nonatomic, readonly) struct CGRect AXMRectValue;
@property (nonatomic, readonly) struct CGAffineTransform AXMAffineTransformValue;

+ (id)axmValueWithCGRect:(struct CGRect)arg1;
+ (id)axmValueWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)axmValueWithCGPoint:(struct CGPoint)arg1;
+ (id)axmValueWithCGVector:(struct CGVector)arg1;
+ (id)axmValueWithCGSize:(struct CGSize)arg1;

@end
