/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NTPBDate;

@interface NTPBFeedViewportEdition : PBCodable

{
    NTPBDate *_feedDateRangeEnd;
    NTPBDate *_feedDateRangeStart;
    NTPBDate *_keyDate;
}

@property (nonatomic, readonly) _Bool hasKeyDate;
@property (retain, nonatomic) NTPBDate *keyDate;
@property (nonatomic, readonly) _Bool hasFeedDateRangeStart;
@property (retain, nonatomic) NTPBDate *feedDateRangeStart;
@property (nonatomic, readonly) _Bool hasFeedDateRangeEnd;
@property (retain, nonatomic) NTPBDate *feedDateRangeEnd;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
