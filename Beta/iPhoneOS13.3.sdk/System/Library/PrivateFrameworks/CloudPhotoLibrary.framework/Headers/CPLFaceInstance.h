/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBCodable.h>

@class NSMutableArray, NSString;

@interface CPLFaceInstance : PBCodable

{
    double _centerX;
    double _centerY;
    double _size;
    unsigned int _faceState;
    unsigned int _nameSource;
    NSString *_personIdentifier;
    NSMutableArray *_rejectedPersonIdentifiers;
    struct {
        unsigned int centerX:1;
        unsigned int centerY:1;
        unsigned int size:1;
        unsigned int faceState:1;
        unsigned int nameSource:1;
    } _has;
}

@property (nonatomic, readonly, getter=isNoneState) _Bool noneState;
@property (nonatomic, getter=isKeyFace) _Bool keyFace;
@property (nonatomic, getter=isManual) _Bool manual;
@property (nonatomic, readonly) _Bool hasPersonIdentifier;
@property (retain, nonatomic) NSString *personIdentifier;
@property (nonatomic) _Bool hasCenterX;
@property (nonatomic) double centerX;
@property (nonatomic) _Bool hasCenterY;
@property (nonatomic) double centerY;
@property (nonatomic) _Bool hasSize;
@property (nonatomic) double size;
@property (nonatomic) _Bool hasFaceState;
@property (nonatomic) unsigned int faceState;
@property (retain, nonatomic) NSMutableArray *rejectedPersonIdentifiers;
@property (nonatomic) _Bool hasNameSource;
@property (nonatomic) unsigned int nameSource;

+ (Class)rejectedPersonIdentifiersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)pointerDescription;
- (void)_setFaceStateBit:(unsigned int)arg1 fromBoolValue:(_Bool)arg2;
- (_Bool)_isFaceStateBitSet:(unsigned int)arg1;
- (void)clearState;
- (void)clearRejectedPersonIdentifiers;
- (void)addRejectedPersonIdentifiers:(id)arg1;
- (unsigned long long)rejectedPersonIdentifiersCount;
- (id)rejectedPersonIdentifiersAtIndex:(unsigned long long)arg1;

@end
