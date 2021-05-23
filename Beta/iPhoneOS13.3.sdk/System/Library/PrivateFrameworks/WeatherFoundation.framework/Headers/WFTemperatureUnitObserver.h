/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSHashTable, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface WFTemperatureUnitObserver : NSObject

{
    int _userTemperatureUnit;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_blockObserversForUUID;
    NSHashTable *_observerObjects;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain) NSMutableDictionary *blockObserversForUUID;
@property (retain) NSHashTable *observerObjects;
@property int userTemperatureUnit;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) int temperatureUnit;

+ (id)sharedObserver;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)addObserver:(id)arg1;
- (_Bool)removeObserver:(id)arg1;
- (void)removeAllObservers;
- (void)_updateTemperatureUnit;
- (id)addBlockObserver:(CDUnknownBlockType)arg1;
- (_Bool)removeBlockObserverWithHandle:(id)arg1;

@end
