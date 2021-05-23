/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDAccountsRenewCredentialsBegin : PBCodable

{
    unsigned long long _timestamp;
    NSString *_accountType;
    NSString *_clientBundleID;
    _Bool _avoidUI;
    _Bool _shouldForce;
    struct {
        unsigned int timestamp:1;
        unsigned int avoidUI:1;
        unsigned int shouldForce:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasAccountType;
@property (retain, nonatomic) NSString *accountType;
@property (nonatomic) _Bool hasAvoidUI;
@property (nonatomic) _Bool avoidUI;
@property (nonatomic) _Bool hasShouldForce;
@property (nonatomic) _Bool shouldForce;
@property (nonatomic, readonly) _Bool hasClientBundleID;
@property (retain, nonatomic) NSString *clientBundleID;

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
