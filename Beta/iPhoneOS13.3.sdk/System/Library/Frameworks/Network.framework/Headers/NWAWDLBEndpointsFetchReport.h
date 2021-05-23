/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface NWAWDLBEndpointsFetchReport : PBCodable

{
    unsigned long long _timestamp;
    int _connectionCellularFallbackCount;
    int _endpointsFetchTaskBadReplyCount;
    int _endpointsFetchTaskCount;
    int _endpointsFetchTaskFailureCount;
    int _endpointsFetchTaskSuccessCount;
    struct {
        unsigned int timestamp:1;
        unsigned int connectionCellularFallbackCount:1;
        unsigned int endpointsFetchTaskBadReplyCount:1;
        unsigned int endpointsFetchTaskCount:1;
        unsigned int endpointsFetchTaskFailureCount:1;
        unsigned int endpointsFetchTaskSuccessCount:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasEndpointsFetchTaskCount;
@property (nonatomic) int endpointsFetchTaskCount;
@property (nonatomic) _Bool hasEndpointsFetchTaskSuccessCount;
@property (nonatomic) int endpointsFetchTaskSuccessCount;
@property (nonatomic) _Bool hasEndpointsFetchTaskFailureCount;
@property (nonatomic) int endpointsFetchTaskFailureCount;
@property (nonatomic) _Bool hasEndpointsFetchTaskBadReplyCount;
@property (nonatomic) int endpointsFetchTaskBadReplyCount;
@property (nonatomic) _Bool hasConnectionCellularFallbackCount;
@property (nonatomic) int connectionCellularFallbackCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
