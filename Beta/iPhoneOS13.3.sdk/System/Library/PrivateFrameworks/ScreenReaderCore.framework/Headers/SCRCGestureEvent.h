/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@class SCRCGestureFinger;

@interface SCRCGestureEvent : NSObject

{
    unsigned long long _deviceIdentifier;
    SCRCGestureFinger *_finger[8];
    unsigned long long _fingerCount;
    struct CGPoint _averageLocation;
    double _time;
}

@property (nonatomic) double time;

- (void)dealloc;
- (id)description;
- (unsigned long long)deviceIdentifier;
- (unsigned long long)fingerCount;
- (id)initWithDeviceIdentifier:(unsigned long long)arg1;
- (struct CGRect)fingerFrame;
- (void)addFingerWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2 pressure:(double)arg3;
- (void)addStylusWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;
- (void)removeFingerWithIdentifier:(unsigned long long)arg1;
- (id)fingerAtIndex:(unsigned long long)arg1;
- (id)fingerWithIdentifier:(unsigned long long)arg1;
- (id)fingerWithoutIdentifier:(unsigned long long)arg1;
- (id)fingers;
- (struct CGPoint)averageLocation;
- (struct CGPoint)balancedLocation;
- (_Bool)isCancelEvent;
- (struct CGPoint)magneticLocation;

@end
