/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface NPKProtoPassSyncStateItem : PBCodable

{
    NSMutableArray *_manifestEntrys;
    NSData *_manifestHash;
    NSString *_passTypeIdentifier;
    unsigned int _sequenceCounter;
    NSString *_serialNumber;
    struct {
        unsigned int sequenceCounter:1;
    } _has;
}

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *serialNumber;
@property (nonatomic) _Bool hasSequenceCounter;
@property (nonatomic) unsigned int sequenceCounter;
@property (retain, nonatomic) NSData *manifestHash;
@property (retain, nonatomic) NSMutableArray *manifestEntrys;

+ (Class)manifestEntryType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addManifestEntry:(id)arg1;
- (unsigned long long)manifestEntrysCount;
- (void)clearManifestEntrys;
- (id)manifestEntryAtIndex:(unsigned long long)arg1;

@end
