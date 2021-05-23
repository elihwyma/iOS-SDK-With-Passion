/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSValue.h>

@interface NSValue (NSValueUIGeometryExtensions)

@property (nonatomic, readonly) struct CGPoint CGPointValue;
@property (nonatomic, readonly) struct CGVector CGVectorValue;
@property (nonatomic, readonly) struct CGSize CGSizeValue;
@property (nonatomic, readonly) struct CGRect CGRectValue;
@property (nonatomic, readonly) struct CGAffineTransform CGAffineTransformValue;
@property (nonatomic, readonly) struct UIEdgeInsets UIEdgeInsetsValue;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets directionalEdgeInsetsValue;
@property (nonatomic, readonly) struct UIOffset UIOffsetValue;
@property (readonly) CDStruct_19cde01f UIKBHandwritingPointValue;

+ (id)valueWithCGAffineTransform:(struct CGAffineTransform)arg1;
+ (id)valueWithUIEdgeInsets:(struct UIEdgeInsets)arg1;
+ (id)valueWithCGPoint:(struct CGPoint)arg1;
+ (id)valueWithCGRect:(struct CGRect)arg1;
+ (id)valueWithCGSize:(struct CGSize)arg1;
+ (id)valueWithDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1;
+ (id)valueWithCGVector:(struct CGVector)arg1;
+ (id)valueWithNSDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1;
+ (id)valueWithUIOffset:(struct UIOffset)arg1;
+ (id)valueWithUIKBHandwritingPoint:(struct)arg1;

@end
