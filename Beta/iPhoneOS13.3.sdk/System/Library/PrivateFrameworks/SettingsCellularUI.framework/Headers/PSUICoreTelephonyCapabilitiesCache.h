/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICoreTelephonyCapabilitiesCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
    NSMutableDictionary *_volteCapabilityDict;
    NSMutableDictionary *_volteCapabilityInfoDict;
    NSMutableDictionary *_volteEnabledDict;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *volteCapabilityDict;
@property (copy) NSMutableDictionary *volteCapabilityInfoDict;
@property (retain) NSMutableDictionary *volteEnabledDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)willEnterForeground;
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;
- (id)initPrivate;
- (void)fetchCanSetCapabilityVoLTE;
- (void)fetchCapabilityEnabledVoLTE;
- (_Bool)canSetCapabilityVoLTE:(id)arg1;
- (_Bool)cannotChangeVoLTESettingCallCarrier:(id)arg1;
- (_Bool)canChangeVoLTESettingEnableStillProvisioning:(id)arg1;
- (_Bool)capabilityEnabledVoLTE:(id)arg1;
- (void)setCapabilityVoLTE:(id)arg1 enabled:(_Bool)arg2;
- (_Bool)singleSimCanSetCapabilityVoLTE;

@end
