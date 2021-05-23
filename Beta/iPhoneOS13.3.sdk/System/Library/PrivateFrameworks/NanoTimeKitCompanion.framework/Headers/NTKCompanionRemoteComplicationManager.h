/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CLKDevice, NSDictionary, NSMutableDictionary, NSString, NTKComplicationCollection;

@protocol OS_dispatch_queue;

@interface NTKCompanionRemoteComplicationManager : NSObject

{
    NTKComplicationCollection *_remoteComplications;
    NSDictionary *_installedComplications;
    NSMutableDictionary *_syncedComplications;
    CLKDevice *_device;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) NTKComplicationCollection *remoteComplications;
@property (retain, nonatomic) NSDictionary *installedComplications;
@property (retain, nonatomic) NSMutableDictionary *syncedComplications;
@property (retain, nonatomic) CLKDevice *device;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_load;
- (void)_fetchInstalledApps;
- (void)_activeDeviceChanged;
- (void)_appStartedInstall;
- (void)_queue_reloadApps;
- (id)_safeComplications;
- (id)_safeInstalledComplications;
- (void)_reloadApps;
- (void)complicationCollection:(id)arg1 didUpdateSampleTemplateForClient:(id)arg2;
- (void)complicationCollection:(id)arg1 didRemoveSampleTemplatesForClient:(id)arg2;
- (void)complicationCollectionDidLoad:(id)arg1;
- (void)enumerateEnabledVendorsForComplicationFamily:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)vendorExistsWithClientIdentifier:(id)arg1 appBundleIdentifier:(id)arg2;
- (id)localizedAppNameForClientIdentifier:(id)arg1;

@end
