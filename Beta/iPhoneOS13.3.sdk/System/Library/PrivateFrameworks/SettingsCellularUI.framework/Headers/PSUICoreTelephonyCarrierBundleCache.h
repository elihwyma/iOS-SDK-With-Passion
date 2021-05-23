/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface PSUICoreTelephonyCarrierBundleCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
    NSMutableDictionary *_carrierNameDict;
    NSMutableDictionary *_carrierBundleVersionDict;
    NSMutableDictionary *_volteCustomerCarePhoneNumberDict;
    NSMutableDictionary *_volteCustomerCareWebsiteDict;
    NSMutableDictionary *_show3GSwitchWithVolteDict;
    NSMutableDictionary *_showVolteWarningUnsupportedCarrierDict;
    NSMutableDictionary *_carrierServicesDict;
    NSMutableDictionary *_showServiceCodes;
    NSMutableDictionary *_carrierServicesAccountUrlDict;
    NSMutableDictionary *_carrierMmsInfoUrlDict;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *carrierNameDict;
@property (retain) NSMutableDictionary *carrierBundleVersionDict;
@property (retain) NSMutableDictionary *volteCustomerCarePhoneNumberDict;
@property (retain) NSMutableDictionary *volteCustomerCareWebsiteDict;
@property (retain) NSMutableDictionary *show3GSwitchWithVolteDict;
@property (retain) NSMutableDictionary *showVolteWarningUnsupportedCarrierDict;
@property (retain) NSMutableDictionary *carrierServicesDict;
@property (retain) NSMutableDictionary *showServiceCodes;
@property (retain) NSMutableDictionary *carrierServicesAccountUrlDict;
@property (retain) NSMutableDictionary *carrierMmsInfoUrlDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)willEnterForeground;
- (void)carrierBundleChange:(id)arg1;
- (id)initPrivate;
- (void)_clearCache;
- (id)carrierName:(id)arg1;
- (id)carrierBundleVersion:(id)arg1;
- (id)carrierServicesAccountUrl:(id)arg1;
- (id)carrierServicesAccountTitle:(id)arg1;
- (id)mmsInfoUrl:(id)arg1;
- (id)mmsInfoTitle:(id)arg1;
- (id)carrierServices:(id)arg1;
- (_Bool)showServiceCodes:(id)arg1;
- (id)carrierBundleValue:(id)arg1 context:(id)arg2;
- (id)activeDataCarrierName;
- (_Bool)showVolteWarningUnsupportedCarrier:(id)arg1;
- (_Bool)show3GSwitchWithVolte:(id)arg1;
- (id)volteCustomerCarePhoneNumber:(id)arg1;
- (id)volteCustomerCareWebsite:(id)arg1;
- (id)fetchCarrierBundleValue:(id)arg1 context:(id)arg2;
- (id)fetchCarrierBundleValueAsString:(id)arg1;
- (void)fetchCarrierName;
- (void)fetchCarrierBundleVersion;
- (void)fetchVolteCustomerCarePhoneNumber;
- (void)fetchVolteCustomerCareWebsite;
- (id)fetchCarrierBundleValue:(id)arg1;
- (void)fetchShow3GSwitchWithVolte;
- (void)fetchShowVolteWarningUnsupportedCarrier;
- (void)fetchCarrierServices;
- (void)fetchShowServiceCodes;
- (void)fetchCarrierServicesAccountUrl;
- (void)fetchCarrierMmsInfoUrl;

@end
