/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface NWAWDLibnetcoreNetworkdStatsReport : PBCodable

{
    unsigned long long _fallbackConnectionCount;
    unsigned long long _totalConnectionCount;
    unsigned long long _totalSuccessfulConnectionCount;
    struct {
        unsigned int fallbackConnectionCount:1;
        unsigned int totalConnectionCount:1;
        unsigned int totalSuccessfulConnectionCount:1;
    } _has;
}

@property (nonatomic) _Bool hasTotalConnectionCount;
@property (nonatomic) unsigned long long totalConnectionCount;
@property (nonatomic) _Bool hasTotalSuccessfulConnectionCount;
@property (nonatomic) unsigned long long totalSuccessfulConnectionCount;
@property (nonatomic) _Bool hasFallbackConnectionCount;
@property (nonatomic) unsigned long long fallbackConnectionCount;

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
