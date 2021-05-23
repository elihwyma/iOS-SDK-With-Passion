/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class CUCoalescer, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface SFPowerSourceMonitor : NSObject

{
    struct LogCategory *_ucat;
    _Bool _activateCalled;
    long long _previousSourcesCount;
    unsigned short _powerSourcesUpdateIndex;
    CUCoalescer *_updateCoalescer;
    NSMutableDictionary *_powerSources;
    int _psNotifyTokenAccessoryAttach;
    int _psNotifyTokenAccessoryPowerSource;
    int _psNotifyTokenAccessoryTimeRemaining;
    int _psNotifyTokenAnyPowerSource;
    _Bool _skipCoalescing;
    unsigned int _changeFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _powerSourcesFoundHandler;
    CDUnknownBlockType _powerSourcesLostHandler;
    CDUnknownBlockType _powerSourcesChangedHandler;
}

@property (nonatomic) unsigned int changeFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) _Bool skipCoalescing;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (copy, nonatomic) CDUnknownBlockType powerSourcesFoundHandler;
@property (copy, nonatomic) CDUnknownBlockType powerSourcesLostHandler;
@property (copy, nonatomic) CDUnknownBlockType powerSourcesChangedHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_update;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cleanup;
- (void)_updatePowerSources;
- (void)_triggerUpdatePowerSources;
- (_Bool)powerSourcesListWithOutInfo:(const void **)arg1 outSources:(const struct __CFArray **)arg2 outSourcesCount:(long long *)arg3;
- (void)_updatePowerSourcesWithInfo:(void *)arg1 sources:(struct __CFArray *)arg2 sourcesCount:(long long)arg3;
- (void)_updatePowerSource:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_foundPowerSource:(id)arg1 desc:(id)arg2 adapterDesc:(id)arg3;
- (void)_handlePowerSourcesLost:(id)arg1;
- (void)_handlePowerSourcesFound:(id)arg1;
- (void)_handlePowerSourcesChanged:(id)arg1 changes:(unsigned int)arg2;
- (void)_removePowerSources:(id)arg1;

@end
