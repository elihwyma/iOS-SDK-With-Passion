/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _CPTuscanyConnectionInfo <Swift>

@property (nonatomic) int pathType;
@property (nonatomic) int fallbackReason;
@property (nonatomic) int fallbackReasonCategory;
@property (nonatomic) double fallbackDelay;
@property (nonatomic) int edgeType;
@property (copy, nonatomic) NSString *edgeAddress;
@property (nonatomic) _Bool isMultipath;
@property (nonatomic) unsigned int multipathSubflowCount;
@property (nonatomic) unsigned int multipathConnectedSubflowCount;
@property (nonatomic) unsigned int multipathPrimarySubflowInterfaceIndex;
@property (copy, nonatomic) NSDictionary *multipathSubflowSwitchCounts;
@property (nonatomic) double firstTxByteTimeStamp;
@property (nonatomic) double firstTxByteDelay;
@property (nonatomic) double connectionDelay;
@property (nonatomic) _Bool TFOsucceeded;
@property (nonatomic) int IPType;
@property (nonatomic) int interfaceType;
@property (nonatomic) unsigned int minimumRTT;
@property (nonatomic) double timeIntervalSinceLastUsage;
@property (nonatomic) double timeToFirstByte;
@property (nonatomic) int tunnelConnectionError;
@property (nonatomic) _Bool isTFOProbeSucceeded;
@property (nonatomic) unsigned int initialBytesLeftOver;
@property (copy, nonatomic) NSDictionary *tcpInfo;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)setMultipathSubflowSwitchCounts:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)setTcpInfo:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)getMultipathSubflowSwitchCounts:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)getTcpInfo:forKey: /* Error: Ran out of types for this method. */;

@end
