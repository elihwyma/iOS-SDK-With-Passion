/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/EQKitBox.h>

@interface EQKitVSpace : EQKitBox

{
    double mHeight;
    double mDepth;
}

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double layoutHeight;
@property (nonatomic, readonly) double layoutDepth;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)appendOpticalAlignToSpec:(struct Spec *)arg1 offset:(struct CGPoint)arg2;
- (id)initWithHeight:(double)arg1 depth:(double)arg2;

@end
