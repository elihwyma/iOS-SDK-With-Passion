//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ButtonResolver/BRInterface.h>

@class HAButtonHapticsLoader, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSString;

@interface BRInterfaceAOP : BRInterface
{
    struct IONotificationPort _notificationPort;
    unsigned int _arrivalNotification;
    id /* CDUnknownBlockType */ _notificationBlock;
    NSString *_notificationName;
    HAButtonHapticsLoader *_loader;
    NSMutableIndexSet *_freeSlots;
    NSMutableArray *_slotArray;
    NSMutableDictionary *_stateDict;
    BOOL _isReady;
    BOOL _fastHaptics;
    unsigned int _service;
    unsigned int _connect;
    NSUInteger _maxAssetSlots;
}

+ (int)_convertClickState:(NSUInteger)arg1;
+ (int)_convertForceFeel:(NSUInteger)arg1;
+ (id)interface;
@property(readonly, nonatomic) BOOL fastHaptics; // @synthesize fastHaptics=_fastHaptics;
@property(nonatomic) unsigned int connect; // @synthesize connect=_connect;
@property(nonatomic) unsigned int service; // @synthesize service=_service;
- (NSUInteger)maxAssetSlots;
- (BOOL)isReady;
- (BOOL)_setStateAOPConfigsFromStateData:(id)arg1 andSlotData:(id)arg2;
- (BOOL)_setGlobalAOPConfigsFromBRFConfigs:(id)arg1;
- (BOOL)_setDefaultAOPConfigs;
- (BOOL)_serviceSetProperty:(void )arg1 forKey:(struct __CFString )arg2;
- (void)_receiveLoaderAvailableNotification:(id)arg1;
- (void)_findService;
- (BOOL)updateReadyState;
- (void)scheduleReadyNotificationWithBlock:(id /* CDUnknownBlockType */)arg1;
- (void)mergeStateChanges:(id)arg1 into:(id)arg2;
- (id)dataForSlot:(id)arg1 fromArray:(id)arg2;
- (BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id )arg3;
- (BOOL)enableStates:(id)arg1 error:(id )arg2;
- (BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id )arg4;
- (BOOL)setGlobalConfigs:(id)arg1 error:(id )arg2;
- (NSUInteger)unusedAssetSlots;
- (id)propertyList;
- (id)description;
- (void)dealloc;
- (id)initWithFastHaptics:(BOOL)arg1;
- (id)init;

@end

