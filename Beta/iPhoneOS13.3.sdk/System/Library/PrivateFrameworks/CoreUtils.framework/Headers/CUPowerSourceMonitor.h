/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface CUPowerSourceMonitor : NSObject

{
    _Bool _activateCalled;
    NSMutableDictionary *_aggregateSources;
    NSMutableDictionary *_pendingAggregates;
    NSMutableDictionary *_powerSources;
    int _psNotifyTokenAccessoryAttach;
    int _psNotifyTokenAccessoryPowerSource;
    int _psNotifyTokenAccessoryTimeRemaining;
    int _psNotifyTokenAnyPowerSource;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _powerSourceFoundHandler;
    CDUnknownBlockType _powerSourceLostHandler;
    CDUnknownBlockType _powerSourceChangedHandler;
}

@property (nonatomic) unsigned int changeFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType powerSourceFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType powerSourceLostHandler;
@property (copy, nonatomic) CDUnknownBlockType powerSourceChangedHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_update;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)_aggregatePowerSourceFound:(id)arg1;
- (void)_aggregatePowerSourceLost:(id)arg1;
- (void)_aggregatePowerSourceUpdate:(id)arg1 changes:(unsigned int)arg2;
- (void)_updatePowerSources;
- (void)_handlePowerSourceFound:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_handlePowerSourceLost:(id)arg1 sourceID:(id)arg2;
- (void)_handlePowerSourceUpdate:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;

@end
