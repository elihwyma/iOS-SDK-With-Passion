/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFCharacteristicValueDisplayError, HFServiceState, NAFuture, NSString;

@interface HFCharacteristicValueDisplayMetadata : NSObject

{
    long long _primaryState;
    long long _priority;
    NSString *_sortKey;
    long long _transitioningPrimaryState;
    HFCharacteristicValueDisplayError *_error;
    HFServiceState *_serviceState;
    NAFuture *_splitAccountFuture;
}

@property (nonatomic) long long primaryState;
@property (nonatomic) long long transitioningPrimaryState;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *sortKey;
@property (retain, nonatomic) HFCharacteristicValueDisplayError *error;
@property (retain, nonatomic) HFServiceState *serviceState;
@property (retain, nonatomic) NAFuture *splitAccountFuture;

+ (long long)_unknownStatePriorityForServiceType:(id)arg1;
+ (id)_errorForSymptomHandler:(id)arg1 isFixingCurrently:(_Bool)arg2 withContextProvider:(id)arg3;
+ (void)_displayAppleIDSplitErrorForMediaProfile:(id)arg1 havingMetadata:(id)arg2 withContextProvider:(id)arg3;
+ (void)_populateSplitMediaAccountErrorForMedatadata:(id)arg1 withContextProvider:(id)arg2;
+ (id)displayMetadataForServiceDescriptor:(id)arg1 characteristicReadResponse:(id)arg2;
+ (id)displayMetadataForAccessory:(id)arg1 withContextProvider:(id)arg2;
+ (id)displayMetadataForMediaProfile:(id)arg1 withContextProvider:(id)arg2;

- (void)dealloc;
- (void)parseWarningSensorWithServiceType:(id)arg1 response:(id)arg2;
- (void)parseInformationalSensorWithServiceType:(id)arg1 response:(id)arg2;
- (void)parsePowerStateForServiceType:(id)arg1 response:(id)arg2;
- (void)parseActiveStateForServiceType:(id)arg1 response:(id)arg2;
- (void)parseCurrentTargetPositionForServiceType:(id)arg1 response:(id)arg2;
- (void)parseGarageDoorOpenerResponse:(id)arg1;
- (void)parseLockMechanismResponse:(id)arg1;
- (void)parseSecuritySystemResponse:(id)arg1;
- (void)parseThermostatResponse:(id)arg1 serviceType:(id)arg2;
- (void)parseAirPurifierResponse:(id)arg1;
- (void)parseHumidifierDehumidifierResponse:(id)arg1;
- (void)parseProgammableSwitchOfType:(id)arg1 response:(id)arg2;

@end
