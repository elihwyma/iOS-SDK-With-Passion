/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableSet, NSSet, NSString;

@interface NetworkAnalyticsStateRelay : NSObject

{
    NSMutableSet *_defaultGateways;
    _Bool _active;
    _Bool _primary;
    _Bool _knownGood;
    _Bool _rxSignalThresholded;
    _Bool _rxSignalFullBars;
    _Bool _txThresholded;
    _Bool _arpOut;
    _Bool _dnsOut;
    _Bool _internetDnsOut;
    _Bool _stuckDefRoute;
    _Bool _tcpExtraStatsPositive;
    _Bool _apsdFailure;
    unsigned char _powerCostDL;
    unsigned char _powerCostUL;
    _Bool _supportsIPv4;
    _Bool _supportsIPv6;
    unsigned char _radioTechnology;
    unsigned int _rxSignalExemptions;
    unsigned int _tcpProgressHintsScore;
    int _linkQuality;
    int _advisory;
    int _lastReportedRxSignalStrength;
    NSString *_interfaceName;
    unsigned long long _interfaceIndex;
    long long _interface;
    unsigned long long _cellSPIType;
    unsigned long long _lastReportedL2TxFrames;
    unsigned long long _lastReportedL2TxRetry;
    unsigned long long _lastReportedL2TxFail;
    NSDate *_madePrimaryDate;
    unsigned long long _l2MetricsCount;
}

@property (retain) NSString *interfaceName;
@property unsigned long long interfaceIndex;
@property _Bool active;
@property _Bool primary;
@property _Bool knownGood;
@property _Bool rxSignalThresholded;
@property _Bool rxSignalFullBars;
@property _Bool txThresholded;
@property _Bool arpOut;
@property _Bool dnsOut;
@property _Bool internetDnsOut;
@property _Bool stuckDefRoute;
@property (nonatomic) unsigned int rxSignalExemptions;
@property int linkQuality;
@property int advisory;
@property unsigned char powerCostDL;
@property unsigned char powerCostUL;
@property _Bool supportsIPv4;
@property _Bool supportsIPv6;
@property unsigned char radioTechnology;
@property unsigned long long cellSPIType;
@property int lastReportedRxSignalStrength;
@property unsigned long long lastReportedL2TxFrames;
@property unsigned long long lastReportedL2TxRetry;
@property unsigned long long lastReportedL2TxFail;
@property unsigned long long l2MetricsCount;
@property (retain) NSDate *madePrimaryDate;
@property (readonly) long long interface;
@property _Bool tcpExtraStatsPositive;
@property _Bool apsdFailure;
@property unsigned int tcpProgressHintsScore;
@property (readonly) NSSet *defaultGateways;

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)description;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)populatePropertiesOnAWDMetric:(id)arg1 ingress:(_Bool)arg2;
- (void)addDefaultGateway:(id)arg1;
- (void)removeAllDefaultGateways;
- (id)initForInternalType:(long long)arg1;

@end
