/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NTPBFeedViewportGap, NTPBFeedViewportGroup;

@interface NTPBFeedViewportElement : PBCodable

{
    NSString *_identifier;
    NTPBFeedViewportGap *_pbGap;
    NTPBFeedViewportGroup *_pbGroup;
    int _type;
    CDStruct_f953fb60 _has;
}

@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasPbGroup;
@property (retain, nonatomic) NTPBFeedViewportGroup *pbGroup;
@property (nonatomic, readonly) _Bool hasPbGap;
@property (retain, nonatomic) NTPBFeedViewportGap *pbGap;

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
