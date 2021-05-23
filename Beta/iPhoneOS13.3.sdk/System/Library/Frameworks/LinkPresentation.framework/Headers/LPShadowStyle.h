/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface LPShadowStyle : NSObject

{
    double _radius;
    double _opacity;
    UIColor *_color;
}

@property (nonatomic) double radius;
@property (nonatomic) double opacity;
@property (retain, nonatomic) UIColor *color;

+ (id)cardHeadingIconShadow;

- (id)init;

@end
