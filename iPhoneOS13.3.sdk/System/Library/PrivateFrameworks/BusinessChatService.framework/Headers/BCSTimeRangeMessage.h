//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


__attribute__((visibility("hidden")))
@interface BCSTimeRangeMessage : PBCodable <NSCopying>
{
    int _from;
    int _to;
    BOOL _allDay;
    struct {
        unsigned int from:1;
        unsigned int to:1;
        unsigned int allDay:1;
    } _has;
}

@property(nonatomic) BOOL allDay; // @synthesize allDay=_allDay;
@property(nonatomic) int to; // @synthesize to=_to;
@property(nonatomic) int from; // @synthesize from=_from;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasAllDay;
@property(nonatomic) BOOL hasTo;
@property(nonatomic) BOOL hasFrom;

@end

