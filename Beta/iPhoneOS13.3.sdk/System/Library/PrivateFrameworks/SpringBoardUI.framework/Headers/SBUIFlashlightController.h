/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <Foundation/NSObject.h>

@class AVFlashlight, NSHashTable;

@protocol OS_dispatch_queue;

@interface SBUIFlashlightController : NSObject

{
    AVFlashlight *_flashlight;
    NSObject<OS_dispatch_queue> *_flashlightQueue;
    unsigned long long _level;
    NSHashTable *_observers;
    _Bool _overheated;
    _Bool _available;
}

@property (nonatomic, readonly, getter=isAvailable) _Bool available;
@property (nonatomic, readonly, getter=isOverheated) _Bool overheated;
@property (nonatomic) unsigned long long level;

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (void)warmUp;
- (void)removeAllObservers;
- (unsigned long long)_loadFlashlightLevel;
- (void)_postLevelChangeNotification:(unsigned long long)arg1;
- (void)_storeFlashlightLevel:(unsigned long long)arg1;
- (void)_setFlashlightLevel:(float)arg1;
- (void)_turnPowerOn;
- (void)_turnPowerOff;
- (void)_updateStateWithAvailable:(_Bool)arg1 level:(unsigned long long)arg2 overheated:(_Bool)arg3;
- (void)_postOverheatedChangeNotification:(_Bool)arg1;
- (void)_postAvailabilityChangeNotification:(_Bool)arg1;
- (void)turnFlashlightOnForReason:(id)arg1;
- (void)turnFlashlightOffForReason:(id)arg1;
- (void)coolDown;

@end
