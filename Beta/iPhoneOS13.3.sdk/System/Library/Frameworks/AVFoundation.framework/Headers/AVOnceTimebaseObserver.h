/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVTimebaseObserver.h>

@interface AVOnceTimebaseObserver : AVTimebaseObserver

{
    CDStruct_1b6d18a9 _fireTime;
    CDUnknownBlockType _block;
    _Bool _didFire;
}

@property (nonatomic, readonly) _Bool didFire;

- (void)dealloc;
- (void)invalidate;
- (void)_fireBlock;
- (void)_effectiveRateChanged;
- (void)_resetNextFireTime;
- (void)_handleTimeDiscontinuity;
- (id)initWithTimebase:(struct OpaqueCMTimebase *)arg1 fireTime:(CDStruct_1b6d18a9)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

@end
