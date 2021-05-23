/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, NSUUID, SBExternalWifiDefaults, SBSecurityDefaults, SBThermalDefaults;

@interface SBThermalController : NSObject

{
    NSUUID *_samplingToken;
    int _hotToken;
    unsigned long long _hotLevel;
    int _coldToken;
    unsigned long long _coldLevel;
    int _sunToken;
    unsigned long long _sunLevel;
    long long _level;
    _Bool _inSunlight;
    NSHashTable *_observers;
    SBExternalWifiDefaults *_networkDefaults;
    SBThermalDefaults *_thermalDefaults;
    SBSecurityDefaults *_securityDefaults;
}

@property (nonatomic, readonly) long long level;
@property (nonatomic, readonly, getter=isInSunlight) _Bool inSunlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)logThermalEvent:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)_isBlocked;
- (void)addThermalObserver:(id)arg1;
- (void)removeThermalObserver:(id)arg1;
- (_Bool)isThermalBlocked;
- (void)startListeningForThermalEvents;
- (void)_respondToCurrentThermalCondition;
- (void)_setBlocked:(_Bool)arg1;
- (void)_updateThermalJetsamCPUSamplingState;

@end
