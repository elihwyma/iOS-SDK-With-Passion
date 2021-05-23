/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CMAltitudeDataInternal : NSObject

{
    float fAltitude;
    float fPressure;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setAltitude:(float)arg1 andPressure:(float)arg2;
- (id)initWithAltitude:(float)arg1 andPressure:(float)arg2;

@end
