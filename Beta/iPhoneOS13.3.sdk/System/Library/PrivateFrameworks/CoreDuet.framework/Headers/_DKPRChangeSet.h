/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface _DKPRChangeSet : PBCodable

{
    NSMutableArray *_deleteEventIDs;
    NSMutableArray *_events;
}

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableArray *deleteEventIDs;

+ (Class)eventsType;
+ (Class)deleteEventIDType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)addDeleteEventID:(id)arg1;
- (unsigned long long)eventsCount;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)deleteEventIDsCount;
- (void)clearDeleteEventIDs;
- (id)deleteEventIDAtIndex:(unsigned long long)arg1;

@end
