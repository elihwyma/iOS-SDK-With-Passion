/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSValue.h>

@interface NSValue (AXGeometryExtensions)

+ (id)axValueWithCGPoint:(struct CGPoint)arg1;
+ (id)axValueWithCGSize:(struct CGSize)arg1;
+ (id)axValueWithCGRect:(struct CGRect)arg1;

- (struct CGPoint)axCGPointValue;
- (struct CGSize)axCGSizeValue;
- (struct CGRect)axCGRectValue;

@end
