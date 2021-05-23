/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBTelemetryNetworkEventGroup : PBCodable

{
    int _cellularRadioAccessTechnology;
    int _eventType;
    NSMutableArray *_failures;
    NSString *_respondingPop;
    NSMutableArray *_successes;
    _Bool _wifiReachabilityStatus;
    struct {
        unsigned int cellularRadioAccessTechnology:1;
        unsigned int eventType:1;
        unsigned int wifiReachabilityStatus:1;
    } _has;
}

@property (nonatomic) _Bool hasEventType;
@property (nonatomic) int eventType;
@property (nonatomic) _Bool hasWifiReachabilityStatus;
@property (nonatomic) _Bool wifiReachabilityStatus;
@property (nonatomic) _Bool hasCellularRadioAccessTechnology;
@property (nonatomic) int cellularRadioAccessTechnology;
@property (nonatomic, readonly) _Bool hasRespondingPop;
@property (retain, nonatomic) NSString *respondingPop;
@property (retain, nonatomic) NSMutableArray *successes;
@property (retain, nonatomic) NSMutableArray *failures;

+ (Class)successesType;
+ (Class)failuresType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addSuccesses:(id)arg1;
- (void)addFailures:(id)arg1;
- (id)cellularRadioAccessTechnologyAsString:(int)arg1;
- (int)StringAsCellularRadioAccessTechnology:(id)arg1;
- (void)clearSuccesses;
- (unsigned long long)successesCount;
- (id)successesAtIndex:(unsigned long long)arg1;
- (void)clearFailures;
- (unsigned long long)failuresCount;
- (id)failuresAtIndex:(unsigned long long)arg1;

@end
