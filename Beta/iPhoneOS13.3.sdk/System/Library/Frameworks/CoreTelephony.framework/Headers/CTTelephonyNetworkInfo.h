/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

#import <CoreTelephony/Swift-Protocol.h>

@class CTCarrier, CTServiceDescriptorContainer, CoreTelephonyClient, NSDictionary, NSMutableDictionary, NSString;

@protocol CTTelephonyNetworkInfoDelegate;

@interface CTTelephonyNetworkInfo : NSObject <Swift>

{
    CoreTelephonyClient *_client;
    CDUnknownBlockType _serviceSubscriberCellularProvidersDidUpdateNotifier;
    CDUnknownBlockType _subscriberCellularProviderDidUpdateNotifier;
    _Bool _initialized;
    CTServiceDescriptorContainer *_descriptors;
    id <CTTelephonyNetworkInfoDelegate> _delegate;
    NSMutableDictionary *_serviceSubscriberCellularProviders;
    NSMutableDictionary *_cachedCurrentRadioAccessTechnology;
    NSMutableDictionary *_cachedSignalStrength;
    NSMutableDictionary *_cachedCellIds;
}

@property (retain) NSMutableDictionary *serviceSubscriberCellularProviders;
@property (retain) NSMutableDictionary *cachedCurrentRadioAccessTechnology;
@property (retain) NSMutableDictionary *cachedSignalStrength;
@property (retain) NSMutableDictionary *cachedCellIds;
@property (readonly) CTServiceDescriptorContainer *descriptors;
@property (copy, readonly) NSString *dataServiceIdentifier;
@property (weak) id <CTTelephonyNetworkInfoDelegate> delegate;
@property (retain, readonly) CTCarrier *subscriberCellularProvider;
@property (copy, nonatomic) CDUnknownBlockType serviceSubscriberCellularProvidersDidUpdateNotifier;
@property (copy, nonatomic) CDUnknownBlockType subscriberCellularProviderDidUpdateNotifier;
@property (retain, nonatomic, readonly) NSDictionary *serviceCurrentRadioAccessTechnology;
@property (retain, nonatomic, readonly) NSString *currentRadioAccessTechnology;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)signalStrengthChanged:(id)arg1 info:(id)arg2;
- (void)cellChanged:(id)arg1 cell:(id)arg2;
- (void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
- (void)currentDataServiceDescriptorChanged:(id)arg1;
- (void)carrierBundleChange:(id)arg1;
- (id)cellId;
- (id)initWithClient:(id)arg1;
- (_Bool)updateNetworkInfoAndShouldNotifyClient:(_Bool *)arg1 forContext:(id)arg2;
- (void)queryRat;
- (void)queryCTSignalStrength;
- (_Bool)getCarrierName:(id)arg1 forContext:(id)arg2 withError:(id *)arg3;
- (_Bool)getMobileCountryCode:(id)arg1 andIsoCountryCode:(id)arg2 forContext:(id)arg3 withError:(id *)arg4;
- (_Bool)getMobileNetworkCode:(id)arg1 forContext:(id)arg2 withError:(id *)arg3;
- (_Bool)getAllowsVOIP:(_Bool *)arg1 forContext:(id)arg2 withError:(id *)arg3;
- (void)queryRatForDescriptor:(id)arg1;
- (void)updateCellId:(id)arg1 forDescriptor:(id)arg2;
- (void)updateSignalStrength:(id)arg1 descriptor:(id)arg2;
- (void)postNotificationIfReady:(id)arg1 object:(id)arg2;
- (void)querySignalStrengthForDescriptor:(id)arg1;
- (void)updateRat:(id)arg1 descriptor:(id)arg2;
- (void)updateLegacyRat:(id)arg1;
- (id)getFirstCellId;
- (void)queryCellIds;
- (CDUnknownBlockType)serviceSubscribersCellularProviderDidUpdateNotifier;
- (void)setServiceSubscriberCellularProviderDidUpdateNotifier:(CDUnknownBlockType)arg1;
- (id)serviceSignalStrength;
- (id)signalStrength;
- (id)serviceCellId;
- (id)radioAccessTechnology;

@end
