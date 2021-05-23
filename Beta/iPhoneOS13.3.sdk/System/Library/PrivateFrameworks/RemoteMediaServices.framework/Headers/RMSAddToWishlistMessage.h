/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface RMSAddToWishlistMessage : PBCodable

{
    unsigned long long _databaseID;
    unsigned long long _itemID;
    int _sessionIdentifier;
    struct {
        unsigned int databaseID:1;
        unsigned int itemID:1;
        unsigned int sessionIdentifier:1;
    } _has;
}

@property (nonatomic) _Bool hasItemID;
@property (nonatomic) unsigned long long itemID;
@property (nonatomic) _Bool hasDatabaseID;
@property (nonatomic) unsigned long long databaseID;
@property (nonatomic) _Bool hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;

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
