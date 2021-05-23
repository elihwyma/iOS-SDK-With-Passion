/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface HFTemperatureUnitCoordinator : NSObject

{
    _Bool _isCelsius;
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic, readonly) _Bool isCelsius;

+ (id)sharedCoordinator;

- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)_updateIsCelsiusNotifyingObservers:(_Bool)arg1;
- (void)_temperatureUnitDidChange;
- (void)setIsCelsius:(_Bool)arg1;

@end
