/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDDropShadow.h>

@interface TSDMutableDropShadow : TSDDropShadow

@property (nonatomic) double angle;
@property (nonatomic) double offset;
@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (nonatomic) struct CGColor *color;
@property (nonatomic, getter=isEnabled) _Bool enabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setTSUColor:(id)arg1;

@end
