/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <Foundation/NSObject.h>

#import <SystemStatus/Swift-Protocol.h>

@class NSString;

@interface STTelephonyStatusDomainSIMInfo : NSObject <Swift>

{
    _Bool _SIMPresent;
    NSString *_label;
    NSString *_shortLabel;
    unsigned long long _signalStrengthBars;
    unsigned long long _maxSignalStrengthBars;
    unsigned long long _serviceState;
    unsigned long long _cellularServiceState;
    NSString *_serviceDescription;
    NSString *_secondaryServiceDescription;
    unsigned long long _dataNetworkType;
    _Bool _providingDataConnection;
    _Bool _preferredForDataConnections;
    _Bool _registeredWithoutCellular;
    _Bool _callForwardingEnabled;
}

@property (nonatomic, readonly, getter=isSIMPresent) _Bool SIMPresent;
@property (copy, nonatomic, readonly) NSString *label;
@property (copy, nonatomic, readonly) NSString *shortLabel;
@property (nonatomic, readonly) unsigned long long signalStrengthBars;
@property (nonatomic, readonly) unsigned long long maxSignalStrengthBars;
@property (nonatomic, readonly) unsigned long long serviceState;
@property (nonatomic, readonly) unsigned long long cellularServiceState;
@property (copy, nonatomic, readonly) NSString *serviceDescription;
@property (copy, nonatomic, readonly) NSString *secondaryServiceDescription;
@property (nonatomic, readonly) unsigned long long dataNetworkType;
@property (nonatomic, readonly, getter=isProvidingDataConnection) _Bool providingDataConnection;
@property (nonatomic, readonly, getter=isPreferredForDataConnections) _Bool preferredForDataConnections;
@property (nonatomic, readonly, getter=isRegisteredWithoutCellular) _Bool registeredWithoutCellular;
@property (nonatomic, readonly, getter=isCallForwardingEnabled) _Bool callForwardingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)diffFromData:(id)arg1;
- (id)initWithSIMInfo:(id)arg1;
- (id)initWithSIMPresent:(_Bool)arg1 label:(id)arg2 shortLabel:(id)arg3 signalStrengthBars:(unsigned long long)arg4 maxSignalStrengthBars:(unsigned long long)arg5 serviceState:(unsigned long long)arg6 cellularServiceState:(unsigned long long)arg7 serviceDescription:(id)arg8 secondaryServiceDescription:(id)arg9 dataNetworkType:(unsigned long long)arg10 providingDataConnection:(_Bool)arg11 preferredForDataConnections:(_Bool)arg12 registeredWithoutCellular:(_Bool)arg13 callForwardingEnabled:(_Bool)arg14;
- (id)dataByApplyingDiff:(id)arg1;

@end
