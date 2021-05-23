/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface HKStrokeStyle : NSObject

{
    int _lineCap;
    int _lineJoin;
    int _blendMode;
    UIColor *_strokeColor;
    double _lineWidth;
    long long _dashStyle;
}

@property (copy, nonatomic) UIColor *strokeColor;
@property (nonatomic) double lineWidth;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic) long long dashStyle;
@property (nonatomic) int blendMode;

+ (id)strokeStyleWithColor:(id)arg1 lineWidth:(double)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyToContext:(struct CGContext *)arg1;

@end
