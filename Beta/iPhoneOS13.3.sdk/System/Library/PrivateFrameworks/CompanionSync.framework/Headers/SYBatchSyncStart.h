/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <PBCodable.h>

@class NSString, SYMessageHeader;

@interface SYBatchSyncStart : PBCodable

{
    unsigned int _estimatedChangeCount;
    SYMessageHeader *_header;
    NSString *_syncID;
    struct {
        unsigned int estimatedChangeCount:1;
    } _has;
}

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) _Bool hasEstimatedChangeCount;
@property (nonatomic) unsigned int estimatedChangeCount;

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
