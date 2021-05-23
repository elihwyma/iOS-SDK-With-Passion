/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveResponse : PBCodable

{
    CKDPRecord *_record;
    _Bool _clientVersionETagMatch;
    struct {
        unsigned int clientVersionETagMatch:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRecord;
@property (retain, nonatomic) CKDPRecord *record;
@property (nonatomic) _Bool hasClientVersionETagMatch;
@property (nonatomic) _Bool clientVersionETagMatch;

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
