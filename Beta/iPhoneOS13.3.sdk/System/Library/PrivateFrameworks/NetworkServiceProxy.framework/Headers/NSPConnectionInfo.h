/*
 Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface NSPConnectionInfo : NSObject

{
    long long _fallbackReason;
    _Bool _isMultipath;
    _Bool _TFOSucceeded;
    _Bool _isTFOProbeSucceeded;
    long long _pathType;
    long long _fallbackReasonCategory;
    double _fallbackDelay;
    long long _edgeType;
    NSString *_edgeAddress;
    unsigned long long _multipathSubflowCount;
    unsigned long long _multipathConnectedSubflowCount;
    unsigned long long _multipathPrimarySubflowInterfaceIndex;
    NSDictionary *_multipathSubflowSwitchCounts;
    NSDictionary *_TCPInfo;
    NSDate *_firstTxByteTimeStamp;
    double _firstTxByteDelay;
    double _connectionDelay;
    long long _IPType;
    long long _interfaceType;
    unsigned long long _minimumRTT;
    double _timeIntervalSinceLastUsage;
    double _timeToFirstByte;
    long long _tunnelConnectionError;
    unsigned long long _initialBytesLeftOver;
    NSDictionary *_exceptions;
    NSString *_interfaceName;
    NSArray *_timingIntervals;
}

@property (nonatomic) long long pathType;
@property (nonatomic) long long fallbackReason;
@property (nonatomic) double fallbackDelay;
@property (nonatomic) long long edgeType;
@property (retain, nonatomic) NSString *edgeAddress;
@property (nonatomic) _Bool isMultipath;
@property (nonatomic) unsigned long long multipathSubflowCount;
@property (nonatomic) unsigned long long multipathConnectedSubflowCount;
@property (nonatomic) unsigned long long multipathPrimarySubflowInterfaceIndex;
@property (retain, nonatomic) NSDictionary *multipathSubflowSwitchCounts;
@property (retain, nonatomic) NSDictionary *TCPInfo;
@property (retain, nonatomic) NSDate *firstTxByteTimeStamp;
@property (nonatomic) double firstTxByteDelay;
@property (nonatomic) double connectionDelay;
@property (nonatomic) _Bool TFOSucceeded;
@property (nonatomic) long long IPType;
@property (nonatomic) long long interfaceType;
@property (nonatomic) unsigned long long minimumRTT;
@property (nonatomic) double timeIntervalSinceLastUsage;
@property (retain, nonatomic) NSDictionary *exceptions;
@property (retain, nonatomic) NSString *interfaceName;
@property (retain, nonatomic) NSArray *timingIntervals;
@property (nonatomic) double timeToFirstByte;
@property (nonatomic) long long tunnelConnectionError;
@property (nonatomic) _Bool isTFOProbeSucceeded;
@property (nonatomic) unsigned long long initialBytesLeftOver;
@property (nonatomic, readonly) long long fallbackReasonCategory;

+ (_Bool)supportsSecureCoding;
+ (id)getFallbackReasonDescription:(long long)arg1;
+ (int)fallbackReasonToErrno:(long long)arg1;
+ (_Bool)shouldMoveToNextEdgeForFallbackReason:(long long)arg1;
+ (_Bool)shouldResolveForFallbackReason:(long long)arg1;

- (id)copyDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)timingIntervalAtIndex:(unsigned long long)arg1 forKey:(id)arg2;

@end
