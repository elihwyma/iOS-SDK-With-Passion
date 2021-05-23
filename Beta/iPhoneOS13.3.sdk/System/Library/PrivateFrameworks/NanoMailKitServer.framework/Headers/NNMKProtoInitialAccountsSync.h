/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoInitialAccountsSync : PBCodable

{
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSMutableArray *_initialAccounts;
    NSString *_initialSyncVersion;
    CDStruct_a125a100 _has;
}

@property (retain, nonatomic) NSMutableArray *initialAccounts;
@property (nonatomic, readonly) _Bool hasInitialSyncVersion;
@property (retain, nonatomic) NSString *initialSyncVersion;
@property (nonatomic) _Bool hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) _Bool hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;

+ (Class)initialAccountType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addInitialAccount:(id)arg1;
- (unsigned long long)initialAccountsCount;
- (void)clearInitialAccounts;
- (id)initialAccountAtIndex:(unsigned long long)arg1;

@end
