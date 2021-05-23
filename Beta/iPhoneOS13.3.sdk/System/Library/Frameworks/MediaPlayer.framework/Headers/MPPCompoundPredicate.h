/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/Swift-Protocol.h>

@class NSMutableArray;

@interface MPPCompoundPredicate : PBCodable <Swift>

{
    NSMutableArray *_predicates;
}

@property (retain, nonatomic) NSMutableArray *predicates;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearPredicates;
- (void)addPredicates:(id)arg1;
- (unsigned long long)predicatesCount;
- (id)predicatesAtIndex:(unsigned long long)arg1;

@end
