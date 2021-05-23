/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface MIPGenre : PBCodable

{
    long long _persistentId;
    long long _storeId;
    NSString *_name;
    CDStruct_0ee5a09b _has;
}

@property (nonatomic) _Bool hasStoreId;
@property (nonatomic) long long storeId;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool hasPersistentId;
@property (nonatomic) long long persistentId;

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
