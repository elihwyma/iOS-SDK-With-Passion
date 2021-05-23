/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString, _CPTCPInfo, _CPTuscanyConnectionInfo;

@protocol _CPNetworkTimingData <Swift>

@property (copy, nonatomic) NSString *interfaceIdentifier;
@property (copy, nonatomic) NSData *peerAddress;
@property (nonatomic) _Bool connectionRace;
@property (nonatomic) _Bool connectionReused;
@property (retain, nonatomic) _CPTCPInfo *startTimeCounts;
@property (retain, nonatomic) _CPTCPInfo *stopTimeCounts;
@property (copy, nonatomic) NSString *connectionUUID;
@property (copy, nonatomic) NSString *networkProtocolName;
@property (nonatomic) _Bool QUICWhitelistedDomain;
@property (nonatomic) unsigned int redirectCount;
@property (nonatomic) unsigned int redirectCountW3C;
@property (nonatomic) unsigned int requestHeaderSize;
@property (nonatomic) unsigned int responseBodyBytesDecoded;
@property (nonatomic) unsigned int responseBodyBytesReceived;
@property (nonatomic) unsigned int responseHeaderSize;
@property (nonatomic) _Bool TFOSuccess;
@property (nonatomic) double timingDataInit;
@property (retain, nonatomic) _CPTuscanyConnectionInfo *tuscany;
@property (nonatomic) unsigned int connectStart;
@property (nonatomic) unsigned int connectEnd;
@property (nonatomic) unsigned int domainLookupStart;
@property (nonatomic) unsigned int domainLookupEnd;
@property (nonatomic) unsigned int fetchStart;
@property (nonatomic) unsigned int redirectStart;
@property (nonatomic) unsigned int redirectEnd;
@property (nonatomic) unsigned int requestStart;
@property (nonatomic) unsigned int requestEnd;
@property (nonatomic) unsigned int responseStart;
@property (nonatomic) unsigned int responseEnd;
@property (nonatomic) unsigned int secureConnectStart;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
