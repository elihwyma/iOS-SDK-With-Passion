/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NewsCore/Swift-Protocol.h>

@class FCCKPRecord;

@interface FCCKPRecordRetrieveResponse : PBCodable <Swift>

{
    FCCKPRecord *_record;
    _Bool _clientVersionETagMatch;
    struct {
        unsigned int clientVersionETagMatch:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRecord;
@property (retain, nonatomic) FCCKPRecord *record;
@property (nonatomic) _Bool hasClientVersionETagMatch;
@property (nonatomic) _Bool clientVersionETagMatch;

- (void)dealloc;
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
