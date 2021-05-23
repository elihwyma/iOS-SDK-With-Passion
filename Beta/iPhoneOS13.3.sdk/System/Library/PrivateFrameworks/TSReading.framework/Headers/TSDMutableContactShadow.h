/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDContactShadow.h>

@class TSUColor;

@interface TSDMutableContactShadow : TSDContactShadow

@property (nonatomic) double height;
@property (nonatomic) double perspective;
@property (nonatomic) double offset;
@property (nonatomic) struct CGColor *color;
@property (nonatomic) double radius;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) TSUColor *TSUColor;

- (void)setOpacity:(double)arg1;

@end
