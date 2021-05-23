/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <ProtocolBuffer/PBCodable.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface PLJournalEntryHeader : PBCodable <Swift>

{
    unsigned long long _payloadLength;
    int _entryType;
    NSMutableArray *_nilProperties;
    unsigned int _payloadCRC;
    NSString *_payloadID;
    NSData *_payloadUUID;
    unsigned int _payloadVersion;
    struct {
        unsigned int payloadLength:1;
        unsigned int entryType:1;
        unsigned int payloadCRC:1;
        unsigned int payloadVersion:1;
    } _has;
}

@property (nonatomic) _Bool hasEntryType;
@property (nonatomic) int entryType;
@property (nonatomic, readonly) _Bool hasPayloadUUID;
@property (retain, nonatomic) NSData *payloadUUID;
@property (nonatomic, readonly) _Bool hasPayloadID;
@property (retain, nonatomic) NSString *payloadID;
@property (nonatomic) _Bool hasPayloadVersion;
@property (nonatomic) unsigned int payloadVersion;
@property (nonatomic) _Bool hasPayloadLength;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic) _Bool hasPayloadCRC;
@property (nonatomic) unsigned int payloadCRC;
@property (retain, nonatomic) NSMutableArray *nilProperties;

+ (Class)nilPropertiesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)entryTypeAsString:(int)arg1;
- (int)StringAsEntryType:(id)arg1;
- (void)clearNilProperties;
- (void)addNilProperties:(id)arg1;
- (unsigned long long)nilPropertiesCount;
- (id)nilPropertiesAtIndex:(unsigned long long)arg1;

@end
