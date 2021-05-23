/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ASCodableShareLocations : PBCodable

{
    NSString *_activityShareURL;
    NSString *_relationshipShareURL;
}

@property (nonatomic, readonly) _Bool hasActivityShareURL;
@property (retain, nonatomic) NSString *activityShareURL;
@property (nonatomic, readonly) _Bool hasRelationshipShareURL;
@property (retain, nonatomic) NSString *relationshipShareURL;

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
