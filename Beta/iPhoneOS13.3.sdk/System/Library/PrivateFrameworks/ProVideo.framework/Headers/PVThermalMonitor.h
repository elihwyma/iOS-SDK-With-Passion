/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface PVThermalMonitor : NSObject

{
    _Bool _enabled;
    _Bool _hasGoneAboveNominal;
    int _currentThermalLevel;
    int _highestThermalLevel;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) _Bool hasGoneAboveNominal;
@property (nonatomic) int currentThermalLevel;
@property (nonatomic) int highestThermalLevel;
@property (nonatomic, readonly) _Bool thermalLevelExceededNominal;
@property (nonatomic, readonly) int thermalLevel;
@property (nonatomic, readonly) int highestThermalLevelReached;
@property (nonatomic) _Bool enabled;

+ (id)sharedInstance;

- (id)init;
- (_Bool)_updateThermalLevelsWithToken:(int)arg1;
- (_Bool)_disabledThermalTracking;
- (id)thermalLevelLabel;
- (void)_postNotificationPrevious:(int)arg1 new:(int)arg2;
- (void)_setCurrentThermalLevel:(int)arg1;

@end
