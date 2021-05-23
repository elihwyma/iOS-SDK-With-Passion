/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSValue.h>

@interface NSValue (AKValueQuadrilateralExtensions)

@property (readonly) struct AKQuadrilateral quadrilateralValue;

+ (id)valueWithCGRect:(struct CGRect)arg1;
+ (id)akValueWithPoint:(struct CGPoint)arg1;
+ (id)valueWithQuadrilateral:(struct AKQuadrilateral)arg1;
+ (id)akValueWithSize:(struct CGSize)arg1;
+ (id)akValueWithRect:(struct CGRect)arg1;

- (struct CGRect)CGRectValue;
- (struct CGPoint)akPointValue;
- (struct CGSize)akSizeValue;
- (struct CGRect)akRectValue;

@end
