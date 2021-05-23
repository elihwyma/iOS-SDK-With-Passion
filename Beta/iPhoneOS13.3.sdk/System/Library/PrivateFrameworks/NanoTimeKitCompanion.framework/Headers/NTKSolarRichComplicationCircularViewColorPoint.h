/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface NTKSolarRichComplicationCircularViewColorPoint : NSObject

{
    UIColor *_color1;
    UIColor *_color2;
    UIColor *_color3;
    double _position1;
    double _position2;
    double _position3;
    double _progress;
}

@property (nonatomic, readonly) UIColor *color1;
@property (nonatomic, readonly) UIColor *color2;
@property (nonatomic, readonly) UIColor *color3;
@property (nonatomic, readonly) double position1;
@property (nonatomic, readonly) double position2;
@property (nonatomic, readonly) double position3;
@property (nonatomic, readonly) double progress;

+ (id)allPoints;
+ (id)pointWithColor1:(id)arg1 color2:(id)arg2 color3:(id)arg3 position1:(double)arg4 position2:(double)arg5 position3:(double)arg6 progress:(double)arg7;

@end
