/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class ASCodableActivityDataPreview, ASCodableShareLocations, NSString;

@interface ASCodableFinalizeHandshake : PBCodable

{
    ASCodableActivityDataPreview *_activityDataPreview;
    NSString *_handshakeToken;
    ASCodableShareLocations *_inviterShareLocations;
}

@property (nonatomic, readonly) _Bool hasHandshakeToken;
@property (retain, nonatomic) NSString *handshakeToken;
@property (nonatomic, readonly) _Bool hasInviterShareLocations;
@property (retain, nonatomic) ASCodableShareLocations *inviterShareLocations;
@property (nonatomic, readonly) _Bool hasActivityDataPreview;
@property (retain, nonatomic) ASCodableActivityDataPreview *activityDataPreview;

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
