/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBPersonalizationChangeGroup : PBCodable

{
    unsigned long long _changeNumber;
    NSMutableArray *_deltas;
    NSString *_instanceIdentifier;
    struct {
        unsigned int changeNumber:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *deltas;
@property (nonatomic, readonly) _Bool hasInstanceIdentifier;
@property (retain, nonatomic) NSString *instanceIdentifier;
@property (nonatomic) _Bool hasChangeNumber;
@property (nonatomic) unsigned long long changeNumber;

+ (Class)deltasType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addDeltas:(id)arg1;
- (void)clearDeltas;
- (unsigned long long)deltasCount;
- (id)deltasAtIndex:(unsigned long long)arg1;

@end
