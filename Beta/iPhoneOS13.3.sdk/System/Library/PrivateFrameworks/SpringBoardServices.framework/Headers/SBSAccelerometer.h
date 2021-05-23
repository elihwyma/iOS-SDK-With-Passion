/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSAccelerometer, NSString;

@protocol SBSAccelerometerDelegate;

@interface SBSAccelerometer : NSObject

{
    id <SBSAccelerometerDelegate> _delegate;
    BKSAccelerometer *_bksMirror;
}

@property (nonatomic) _Bool accelerometerEventsEnabled;
@property (nonatomic) double updateInterval;
@property (nonatomic) float xThreshold;
@property (nonatomic) float yThreshold;
@property (nonatomic) float zThreshold;
@property (nonatomic) _Bool orientationEventsEnabled;
@property (weak, nonatomic) id <SBSAccelerometerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (int)currentDeviceOrientation;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;

@end
