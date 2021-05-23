/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

#import <TSReading/Swift-Protocol.h>

@interface EQKitBox : NSObject <Swift>

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double width;
@property (nonatomic, readonly) double vsize;
@property (nonatomic, readonly) double layoutHeight;
@property (nonatomic, readonly) double layoutDepth;
@property (nonatomic, readonly) double layoutVSize;
@property (nonatomic, readonly) struct CGColor *color;
@property (nonatomic, readonly) double opticalAlignWidth;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;
- (struct CGRect)erasableBounds;
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;
- (struct CGAffineTransform)transformFromDescendant:(id)arg1;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;

@end
