/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface NPKProtoRelevantPassesRequest : PBRequest

{
    NSMutableArray *_passRelevancyTuples;
}

@property (retain, nonatomic) NSMutableArray *passRelevancyTuples;

+ (Class)passRelevancyTuplesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPassRelevancyTuples:(id)arg1;
- (unsigned long long)passRelevancyTuplesCount;
- (void)clearPassRelevancyTuples;
- (id)passRelevancyTuplesAtIndex:(unsigned long long)arg1;

@end
