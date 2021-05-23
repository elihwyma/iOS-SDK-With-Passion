/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface NPKProtoHandleRemoveTransactionsRequest : PBRequest

{
    NSMutableArray *_identifiers;
    NSMutableArray *_passIDs;
}

@property (retain, nonatomic) NSMutableArray *identifiers;
@property (retain, nonatomic) NSMutableArray *passIDs;

+ (Class)identifiersType;
+ (Class)passIDsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)identifiersCount;
- (void)clearIdentifiers;
- (void)addIdentifiers:(id)arg1;
- (id)identifiersAtIndex:(unsigned long long)arg1;
- (void)addPassIDs:(id)arg1;
- (unsigned long long)passIDsCount;
- (void)clearPassIDs;
- (id)passIDsAtIndex:(unsigned long long)arg1;

@end
