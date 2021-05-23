/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface MIPMultiverseIdentifier : PBCodable

{
    long long _accountId;
    long long _purchaseHistoryId;
    long long _sagaId;
    long long _storeId;
    NSString *_cloudUniversalLibraryId;
    NSMutableArray *_libraryIdentifiers;
    int _mediaObjectType;
    int _mediaType;
    NSString *_name;
    struct {
        unsigned int accountId:1;
        unsigned int purchaseHistoryId:1;
        unsigned int sagaId:1;
        unsigned int storeId:1;
        unsigned int mediaObjectType:1;
        unsigned int mediaType:1;
    } _has;
}

@property (nonatomic) _Bool hasMediaObjectType;
@property (nonatomic) int mediaObjectType;
@property (nonatomic) _Bool hasMediaType;
@property (nonatomic) int mediaType;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) _Bool hasAccountId;
@property (nonatomic) long long accountId;
@property (nonatomic) _Bool hasStoreId;
@property (nonatomic) long long storeId;
@property (nonatomic) _Bool hasSagaId;
@property (nonatomic) long long sagaId;
@property (nonatomic) _Bool hasPurchaseHistoryId;
@property (nonatomic) long long purchaseHistoryId;
@property (nonatomic, readonly) _Bool hasCloudUniversalLibraryId;
@property (retain, nonatomic) NSString *cloudUniversalLibraryId;
@property (retain, nonatomic) NSMutableArray *libraryIdentifiers;

+ (Class)libraryIdentifiersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)mediaTypeAsString:(int)arg1;
- (int)StringAsMediaType:(id)arg1;
- (unsigned long long)libraryIdentifiersCount;
- (void)addLibraryIdentifiers:(id)arg1;
- (void)clearLibraryIdentifiers;
- (id)libraryIdentifiersAtIndex:(unsigned long long)arg1;
- (id)mediaObjectTypeAsString:(int)arg1;
- (int)StringAsMediaObjectType:(id)arg1;

@end
