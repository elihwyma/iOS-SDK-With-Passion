/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCGestureFinger.h>

@interface SCRCGestureStylus : SCRCGestureFinger

{
    double _altitude;
    double _azimuth;
}

- (long long)type;
- (double)altitude;
- (double)azimuth;
- (id)initWithIdentifier:(unsigned long long)arg1 location:(struct CGPoint)arg2 pressure:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;

@end
