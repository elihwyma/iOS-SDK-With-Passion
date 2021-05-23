/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <SystemStatus/STTelephonyStatusDomainSIMInfo.h>

@class NSString;

@interface STMutableTelephonyStatusDomainSIMInfo : STTelephonyStatusDomainSIMInfo

@property (nonatomic, getter=isSIMPresent) _Bool SIMPresent;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *shortLabel;
@property (nonatomic) unsigned long long signalStrengthBars;
@property (nonatomic) unsigned long long maxSignalStrengthBars;
@property (nonatomic) unsigned long long serviceState;
@property (nonatomic) unsigned long long cellularServiceState;
@property (copy, nonatomic) NSString *serviceDescription;
@property (copy, nonatomic) NSString *secondaryServiceDescription;
@property (nonatomic) unsigned long long dataNetworkType;
@property (nonatomic, getter=isProvidingDataConnection) _Bool providingDataConnection;
@property (nonatomic, getter=isPreferredForDataConnections) _Bool preferredForDataConnections;
@property (nonatomic, getter=isRegisteredWithoutCellular) _Bool registeredWithoutCellular;
@property (nonatomic, getter=isCallForwardingEnabled) _Bool callForwardingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)applyDiff:(id)arg1;

@end
