/*
 Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

#import <CoreBrightness/CBContainer.h>

@class CADisplay, CBCAManager, NSArray, NSMutableArray, NSString, NSUUID;

@protocol CBContainerModuleProtocol, CBContainerModuleProtocol><CBHIDServiceProtocol, CBContainerProtocol><CBHIDServiceProtocol><NightShiftSupportProtocol;

__attribute__((visibility("hidden")))
@interface CBDisplayContaineriOS : CBContainer

{
    NSMutableArray *_relevantServices;
    NSMutableArray *_modules;
    NSArray *_whitelist;
    NSUUID *_displayContainerUUID;
    id <CBContainerModuleProtocol> _displayControlModule;
    id <CBContainerModuleProtocol><CBHIDServiceProtocol> _autoBrightnessModule;
    id <CBContainerProtocol><CBHIDServiceProtocol><NightShiftSupportProtocol> _harmonyContainer;
    id <CBContainerModuleProtocol><CBHIDServiceProtocol> _edrControlModule;
    unsigned int _displayService;
    _Bool _running;
    _Bool _builtIn;
    unsigned long long _displayID;
    unsigned long long _registryID;
    NSString *_description;
    CADisplay *_display;
    struct IONotificationPort *_displayArrivalNotificationPort;
    unsigned int _displayArrivalIterator;
    unsigned int _displayRemovalIterator;
    CBCAManager *_displayCAManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)setProperty:(id)arg1 forKey:(id)arg2;
- (void)stop;
- (_Bool)start;
- (id)initWithCADisplay:(id)arg1;
- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (id)copyPropertyForKey:(id)arg1;
- (void)setNightShiftFactorDictionary:(id)arg1;
- (id)copyPreferenceForKey:(id)arg1 user:(id)arg2;
- (void)setPreference:(id)arg1 forKey:(id)arg2 user:(id)arg3;
- (void)unregisterNotificationBlock;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (_Bool)handleHIDEvent:(struct __IOHIDEvent *)arg1 from:(struct __IOHIDServiceClient *)arg2;
- (_Bool)addHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)removeHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
- (id)copyPropertyInternalForKey:(id)arg1;
- (id)copyIdentifiers;
- (_Bool)findBacklight;
- (id)initWithBacklightService:(unsigned int)arg1;
- (id)copyStatusInfo;
- (_Bool)handleDisplayArrival:(unsigned int)arg1;
- (_Bool)setupInternalModules;
- (_Bool)initialiseHIDDisplay;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2 from:(id)arg3;
- (void)tearDownInternalModules;
- (_Bool)matchDisplayWithHidService:(struct __IOHIDServiceClient *)arg1;

@end
