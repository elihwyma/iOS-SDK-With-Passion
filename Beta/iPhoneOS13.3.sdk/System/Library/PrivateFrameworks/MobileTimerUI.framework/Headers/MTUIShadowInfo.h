/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface MTUIShadowInfo : NSObject

{
    UIColor *_color;
    double _radius;
    double _scale;
    struct CGSize _offset;
}

@property (copy, nonatomic) UIColor *color;
@property (nonatomic) double radius;
@property (nonatomic) struct CGSize offset;
@property (nonatomic) double scale;

- (id)initWithColor:(id)arg1 radius:(double)arg2 offset:(struct CGSize)arg3 scale:(double)arg4;

@end
