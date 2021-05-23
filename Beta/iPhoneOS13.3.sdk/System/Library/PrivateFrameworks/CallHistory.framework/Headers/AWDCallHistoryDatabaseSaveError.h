/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDCallHistoryDatabaseSaveError : PBCodable

{
    unsigned long long _timestamp;
    unsigned int _domain;
    unsigned int _error;
    NSString *_table;
    CDStruct_6e486683 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDomain;
@property (nonatomic) unsigned int domain;
@property (nonatomic) _Bool hasError;
@property (nonatomic) unsigned int error;
@property (nonatomic, readonly) _Bool hasTable;
@property (retain, nonatomic) NSString *table;

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
