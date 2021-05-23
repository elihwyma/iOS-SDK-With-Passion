/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NTPBSession;

@interface NTPBSessionBatch : PBCodable

{
    NSMutableArray *_events;
    NSData *_identifier;
    NTPBSession *_session;
}

@property (nonatomic, readonly) _Bool hasSession;
@property (retain, nonatomic) NTPBSession *session;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSData *identifier;

+ (Class)eventsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addEvents:(id)arg1;
- (unsigned long long)eventsCount;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)arg1;

@end
