/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NTPBHeadlineBackingElement : PBCodable

{
    NSData *_articleRecordData;
    NSData *_masterIssueRecordData;
    NSData *_sourceChannelRecordData;
}

@property (nonatomic, readonly) _Bool hasArticleRecordData;
@property (retain, nonatomic) NSData *articleRecordData;
@property (nonatomic, readonly) _Bool hasSourceChannelRecordData;
@property (retain, nonatomic) NSData *sourceChannelRecordData;
@property (nonatomic, readonly) _Bool hasMasterIssueRecordData;
@property (retain, nonatomic) NSData *masterIssueRecordData;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
