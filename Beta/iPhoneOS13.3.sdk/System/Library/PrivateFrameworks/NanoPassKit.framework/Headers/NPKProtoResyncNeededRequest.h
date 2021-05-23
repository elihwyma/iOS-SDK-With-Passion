/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NPKProtoHash, NSMutableArray;

@interface NPKProtoResyncNeededRequest : PBRequest

{
    NPKProtoHash *_expectedHash;
    NSMutableArray *_manifestHashes;
    unsigned int _resyncID;
    NSMutableArray *_uniqueIDs;
    _Bool _fullResyncNeeded;
    struct {
        unsigned int resyncID:1;
        unsigned int fullResyncNeeded:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasExpectedHash;
@property (retain, nonatomic) NPKProtoHash *expectedHash;
@property (retain, nonatomic) NSMutableArray *uniqueIDs;
@property (retain, nonatomic) NSMutableArray *manifestHashes;
@property (nonatomic) _Bool hasFullResyncNeeded;
@property (nonatomic) _Bool fullResyncNeeded;
@property (nonatomic) _Bool hasResyncID;
@property (nonatomic) unsigned int resyncID;

+ (Class)uniqueIDsType;
+ (Class)manifestHashesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addUniqueIDs:(id)arg1;
- (void)addManifestHashes:(id)arg1;
- (unsigned long long)uniqueIDsCount;
- (void)clearUniqueIDs;
- (id)uniqueIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)manifestHashesCount;
- (void)clearManifestHashes;
- (id)manifestHashesAtIndex:(unsigned long long)arg1;

@end
