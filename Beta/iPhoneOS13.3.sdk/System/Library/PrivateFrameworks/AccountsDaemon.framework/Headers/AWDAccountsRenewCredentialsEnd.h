/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDAccountsRenewCredentialsEnd : PBCodable

{
    unsigned long long _timestamp;
    NSString *_accountType;
    unsigned int _result;
    struct {
        unsigned int timestamp:1;
        unsigned int result:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasAccountType;
@property (retain, nonatomic) NSString *accountType;
@property (nonatomic) _Bool hasResult;
@property (nonatomic) unsigned int result;

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
