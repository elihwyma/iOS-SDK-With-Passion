/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <ProtocolBuffer/PBCodable.h>

@class MIPMultiverseIdentifier;

@interface _MPUProtoBufUserActivityContainerItem : PBCodable

{
    int _containerItemType;
    MIPMultiverseIdentifier *_selectedMultiverseIdentifier;
    MIPMultiverseIdentifier *_visualReferenceMultiverseIdentifier;
    struct {
        unsigned int containerItemType:1;
    } _has;
}

@property (nonatomic) _Bool hasContainerItemType;
@property (nonatomic) int containerItemType;
@property (nonatomic, readonly) _Bool hasSelectedMultiverseIdentifier;
@property (retain, nonatomic) MIPMultiverseIdentifier *selectedMultiverseIdentifier;
@property (nonatomic, readonly) _Bool hasVisualReferenceMultiverseIdentifier;
@property (retain, nonatomic) MIPMultiverseIdentifier *visualReferenceMultiverseIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
