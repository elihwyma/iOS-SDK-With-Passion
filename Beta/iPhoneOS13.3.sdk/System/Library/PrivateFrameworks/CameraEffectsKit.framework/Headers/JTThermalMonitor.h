/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface JTThermalMonitor : NSObject

{
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

+ (id)sharedInstance;

- (id)init;
- (void)_postNotification:(id)arg1;
- (void)_updateThermalLevelsWithToken:(int)arg1;
- (id)_analyticValueForThermalLevelBefore:(int)arg1 after:(int)arg2;
- (int)getStateForNotifyToken:(int)arg1;
- (_Bool)_disabledThermalTracking;
- (id)thermalLevelLabel;

@end
