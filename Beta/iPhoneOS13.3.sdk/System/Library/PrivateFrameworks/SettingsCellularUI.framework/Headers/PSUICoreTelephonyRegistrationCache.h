/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface PSUICoreTelephonyRegistrationCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
    NSMutableDictionary *_imsStatusVoiceDict;
    NSMutableDictionary *_imsStatusSMSDict;
    NSMutableDictionary *_rejectCauseCodeDict;
    NSMutableDictionary *_supportedDataRatesDict;
    NSMutableDictionary *_maxDataRateDict;
    NSMutableDictionary *_operatorNameDict;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *imsStatusVoiceDict;
@property (retain) NSMutableDictionary *imsStatusSMSDict;
@property (retain) NSMutableDictionary *rejectCauseCodeDict;
@property (retain) NSMutableDictionary *supportedDataRatesDict;
@property (retain) NSMutableDictionary *maxDataRateDict;
@property (retain) NSMutableDictionary *operatorNameDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)willEnterForeground;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (void)imsRegistrationChanged:(id)arg1 info:(id)arg2;
- (id)initPrivate;
- (_Bool)IMSStatusVoice:(id)arg1;
- (_Bool)IMSStatusSMS:(id)arg1;
- (id)localizedOperatorName:(id)arg1;
- (id)rejectCauseCode:(id)arg1;
- (void)setMaxDataRate:(id)arg1 dataRate:(long long)arg2;
- (long long)maxDataRate:(id)arg1;
- (id)supportedDataRates:(id)arg1;
- (void)fetchIMSStatus;
- (void)fetchRejectCauseCode;
- (void)fetchSupportedDataRates;
- (void)fetchMaxDataRate;
- (void)fetchLocalizedOperatorName;

@end
