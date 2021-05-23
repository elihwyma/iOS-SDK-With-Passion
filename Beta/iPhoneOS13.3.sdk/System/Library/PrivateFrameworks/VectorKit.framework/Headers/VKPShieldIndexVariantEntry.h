/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VKPShieldIndexVariantEntry : PBCodable

{
    NSMutableArray *_entries;
    NSMutableArray *_textEntries;
    int _variantType;
    struct {
        unsigned int variantType:1;
    } _has;
}

@property (nonatomic) _Bool hasVariantType;
@property (nonatomic) int variantType;
@property (retain, nonatomic) NSMutableArray *entries;
@property (retain, nonatomic) NSMutableArray *textEntries;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)entriesCount;
- (void)clearEntries;
- (id)entriesAtIndex:(unsigned long long)arg1;
- (void)addEntries:(id)arg1;
- (void)addTextEntries:(id)arg1;
- (unsigned long long)textEntriesCount;
- (void)clearTextEntries;
- (id)textEntriesAtIndex:(unsigned long long)arg1;

@end
