/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class ASCodableRelationshipContainer, NSMutableArray, NSString;

@interface ASCodableContact : PBCodable

{
    NSMutableArray *_destinations;
    NSString *_fullName;
    NSString *_linkedContactStoreIdentifier;
    ASCodableRelationshipContainer *_relationshipContainer;
    ASCodableRelationshipContainer *_remoteRelationshipContainer;
    NSString *_shortName;
}

@property (nonatomic, readonly) _Bool hasLinkedContactStoreIdentifier;
@property (retain, nonatomic) NSString *linkedContactStoreIdentifier;
@property (nonatomic, readonly) _Bool hasFullName;
@property (retain, nonatomic) NSString *fullName;
@property (nonatomic, readonly) _Bool hasShortName;
@property (retain, nonatomic) NSString *shortName;
@property (retain, nonatomic) NSMutableArray *destinations;
@property (nonatomic, readonly) _Bool hasRelationshipContainer;
@property (retain, nonatomic) ASCodableRelationshipContainer *relationshipContainer;
@property (nonatomic, readonly) _Bool hasRemoteRelationshipContainer;
@property (retain, nonatomic) ASCodableRelationshipContainer *remoteRelationshipContainer;

+ (Class)destinationsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)destinationsCount;
- (void)clearDestinations;
- (void)addDestinations:(id)arg1;
- (id)destinationsAtIndex:(unsigned long long)arg1;

@end
