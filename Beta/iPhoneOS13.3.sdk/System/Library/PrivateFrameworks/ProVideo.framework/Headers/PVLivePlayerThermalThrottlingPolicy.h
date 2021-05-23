/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PVLivePlayerThermalThrottlingPolicy : NSObject

{
    struct HGSynchronizable *_lock;
    struct map<PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *, std::__1::less<PVSPI_OSThermalPressureLevel>, std::__1::allocator<std::__1::pair<const PVSPI_OSThermalPressureLevel, PVLivePlayerThrottlingControlParameters *>>> _policy;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (void)setThermalLevel:(int)arg1 controlParameters:(id)arg2;
- (id)populatedControlParametersForCurrentThermalLevel;
- (id)populatedControlParametersForThermalLevel:(int)arg1;
- (id)controlParametersForThermalLevel:(int)arg1;

@end
