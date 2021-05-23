/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDCallHistoryCommCenterMigration : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _recordCount;
    unsigned int _version;
    _Bool _success;
    struct {
        unsigned int timestamp:1;
        unsigned int recordCount:1;
        unsigned int version:1;
        unsigned int success:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasSuccess;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasRecordCount;
@property (nonatomic) unsigned int recordCount;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int version;

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
