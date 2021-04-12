//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSData, NSMutableArray, NTPBSession;

@interface NTPBSessionBatch : PBCodable <NSCopying>
{
    NSMutableArray *_events;
    NSData *_identifier;
    NTPBSession *_session;
}

+ (Class)eventsType;
@property(retain, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NTPBSession *session; // @synthesize session=_session;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (id)eventsAtIndex:(NSUInteger)arg1;
- (NSUInteger)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;
@property(readonly, nonatomic) BOOL hasSession;

@end

