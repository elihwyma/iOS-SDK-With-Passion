/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDCallHistoryDatabaseMigration : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _domain;
    unsigned int _error;
    unsigned int _newSchema;
    unsigned int _oldSchema;
    struct {
        unsigned int timestamp:1;
        unsigned int domain:1;
        unsigned int error:1;
        unsigned int newSchema:1;
        unsigned int oldSchema:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasOldSchema;
@property (nonatomic) unsigned int oldSchema;
@property (nonatomic) _Bool hasNewSchema;
@property (nonatomic) unsigned int newSchema;
@property (nonatomic) _Bool hasDomain;
@property (nonatomic) unsigned int domain;
@property (nonatomic) _Bool hasError;
@property (nonatomic) unsigned int error;

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
