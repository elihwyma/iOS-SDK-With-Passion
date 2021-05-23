/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <ProtocolBuffer/PBCodable.h>

@interface HealthUIAWDHealthUIRecordsNumberOfAccountsQuery : PBCodable

{
    unsigned long long _numAccounts;
    unsigned long long _timestamp;
    struct {
        unsigned int numAccounts:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasNumAccounts;
@property (nonatomic) unsigned long long numAccounts;

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
