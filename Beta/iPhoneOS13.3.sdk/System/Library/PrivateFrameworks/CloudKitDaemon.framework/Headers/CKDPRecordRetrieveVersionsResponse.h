/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveVersionsResponse : PBCodable

{
    NSMutableArray *_recordVersions;
    _Bool _isDeleted;
    struct {
        unsigned int isDeleted:1;
    } _has;
}

@property (nonatomic) _Bool hasIsDeleted;
@property (nonatomic) _Bool isDeleted;
@property (retain, nonatomic) NSMutableArray *recordVersions;

+ (Class)recordVersionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addRecordVersions:(id)arg1;
- (unsigned long long)recordVersionsCount;
- (void)clearRecordVersions;
- (id)recordVersionsAtIndex:(unsigned long long)arg1;

@end
