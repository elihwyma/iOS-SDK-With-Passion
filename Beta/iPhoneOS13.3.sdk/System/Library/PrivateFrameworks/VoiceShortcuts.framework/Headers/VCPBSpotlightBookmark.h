/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

#import <PBCodable.h>

#import <VoiceShortcuts/Swift-Protocol.h>

@class NSMutableArray;

@interface VCPBSpotlightBookmark : PBCodable <Swift>

{
    unsigned long long _identifier;
    NSMutableArray *_pairs;
}

@property (nonatomic) unsigned long long identifier;
@property (retain, nonatomic) NSMutableArray *pairs;

+ (Class)pairsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)pairsCount;
- (void)clearPairs;
- (void)addPairs:(id)arg1;
- (id)pairsAtIndex:(unsigned long long)arg1;

@end
