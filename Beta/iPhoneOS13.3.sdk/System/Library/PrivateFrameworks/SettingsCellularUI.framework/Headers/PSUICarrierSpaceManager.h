/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CTCarrierSpaceAppsInfo, CTCarrierSpaceCapabilities, CTCarrierSpaceClient, CTCarrierSpacePlansInfo, CTCarrierSpaceUsageInfo, CTCarrierSpaceUserConsentFlowInfo, CoreTelephonyClient, NSNumber, NSString, PSUIAppInstallController;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICarrierSpaceManager : NSObject

{
    NSObject<OS_dispatch_queue> *_carrierSpaceQueue;
    CTCarrierSpaceCapabilities *_capabilities;
    CTCarrierSpaceUsageInfo *_usageInfo;
    CTCarrierSpacePlansInfo *_plansInfo;
    CTCarrierSpaceAppsInfo *_appsInfo;
    PSUIAppInstallController *_carrierAppInstallController;
    NSNumber *_hasUserConsent;
    CTCarrierSpaceUserConsentFlowInfo *_userConsentFlowInfo;
    NSNumber *_userConsentResponse;
    struct __CTServerConnection *_serverConnection;
    CoreTelephonyClient *_coreTelephonyClient;
    CTCarrierSpaceClient *_carrierSpaceClient;
}

@property (retain, nonatomic) CTCarrierSpaceClient *carrierSpaceClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (long long)bytesFromString:(id)arg1 carrierSpaceUnits:(long long)arg2;
+ (int)carrierMetricTypeForString:(id)arg1;
+ (_Bool)isCarrierMetricTypeValid:(int)arg1;
+ (id)getNSURLSessionConfiguration;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)refresh;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)capabilities;
- (id)usageInfo;
- (id)plansInfo;
- (id)appsInfo;
- (void)capabilitiesDidChange:(id)arg1;
- (void)userConsentFlowInfoDidChange;
- (void)usageDidChange;
- (void)plansDidChange;
- (void)appsDidChange;
- (id)descriptionForPlanMetrics:(id)arg1;
- (_Bool)hasUserConsent;
- (_Bool)planChangeIsRestricted;
- (id)subscribedPlanOptions;
- (id)subscribedDomesticPlanOptions;
- (id)planMetrics;
- (id)userConsentFlowInfo;
- (void)setUserConsent:(_Bool)arg1;
- (void)userConsentAcknowledged:(_Bool)arg1;
- (void)refreshAndReload;
- (_Bool)supportsSweetgum;
- (id)localizedDataStringFromBytes:(unsigned long long)arg1;
- (id)carrierAppInstallController;

@end
