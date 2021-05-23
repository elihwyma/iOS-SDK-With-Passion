/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@interface CLDeviceMotionProperties : NSObject

{
    int _mode;
}

@property (nonatomic) int mode;

- (id)description;
- (id)initWithMode:(int)arg1;

@end
