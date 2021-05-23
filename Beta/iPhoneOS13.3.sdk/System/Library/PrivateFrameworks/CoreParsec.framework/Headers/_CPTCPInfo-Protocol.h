/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString;

@protocol _CPTCPInfo <Swift>

@property (nonatomic) unsigned int avgRTT;
@property (nonatomic) unsigned long long cellRXPackets;
@property (nonatomic) unsigned long long cellTXPackets;
@property (nonatomic) unsigned int connectAttempts;
@property (nonatomic) unsigned int connectSuccesses;
@property (nonatomic) unsigned int minRTT;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long rxDuplicateBytes;
@property (nonatomic) unsigned long long rxOutOfOrderBytes;
@property (nonatomic) unsigned long long rxPackets;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) unsigned long long txPackets;
@property (nonatomic) unsigned long long txRetransmitPackets;
@property (nonatomic) unsigned int varRTT;
@property (nonatomic) unsigned long long wifiRXPackets;
@property (nonatomic) unsigned long long wifiTXPackets;
@property (nonatomic) unsigned long long wiredRXPackets;
@property (nonatomic) unsigned long long wiredTXPackets;
@property (copy, nonatomic) NSString *statsType;
@property (nonatomic) unsigned long long txRetransmitBytes;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
