/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface MIPSeries : PBCodable

{
    long long _storeId;
    NSString *_name;
    NSString *_sortName;
    struct {
        unsigned int storeId:1;
    } _has;
}

@property (nonatomic) _Bool hasStoreId;
@property (nonatomic) long long storeId;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasSortName;
@property (retain, nonatomic) NSString *sortName;

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
