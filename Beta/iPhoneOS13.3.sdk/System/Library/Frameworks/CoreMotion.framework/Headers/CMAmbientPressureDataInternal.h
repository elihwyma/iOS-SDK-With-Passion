/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CMAmbientPressureDataInternal : NSObject

{
    CDStruct_ebf20f05 fPressure;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setAmbientPressure:(CDStruct_ebf20f05)arg1;
- (id)initWithPressure:(CDStruct_ebf20f05)arg1;

@end
