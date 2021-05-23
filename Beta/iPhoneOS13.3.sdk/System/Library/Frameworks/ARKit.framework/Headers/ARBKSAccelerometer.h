/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class BKSAccelerometer;

@interface ARBKSAccelerometer : NSObject

{
    BKSAccelerometer *_accelerometer;
}

+ (id)sharedWeakAccelerometerHandle;
+ (id)sharedAccelerometerHandle;

- (void)dealloc;
- (long long)currentOrientation;
- (id)initPrivate;

@end
