/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBNetworkSessionList : PBCodable

{
    NSMutableArray *_networkEvents;
    NSMutableArray *_networkSessions;
}

@property (retain, nonatomic) NSMutableArray *networkSessions;
@property (retain, nonatomic) NSMutableArray *networkEvents;

+ (Class)networkSessionsType;
+ (Class)networkEventsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (unsigned long long)networkEventsCount;
- (void)clearNetworkEvents;
- (void)addNetworkEvents:(id)arg1;
- (id)networkEventsAtIndex:(unsigned long long)arg1;
- (void)addNetworkSessions:(id)arg1;
- (void)clearNetworkSessions;
- (unsigned long long)networkSessionsCount;
- (id)networkSessionsAtIndex:(unsigned long long)arg1;

@end
