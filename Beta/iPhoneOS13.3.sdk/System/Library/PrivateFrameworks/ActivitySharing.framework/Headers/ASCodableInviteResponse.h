/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class ASCodableActivityDataPreview, ASCodableShareLocations, NSString;

@interface ASCodableInviteResponse : PBCodable

{
    ASCodableActivityDataPreview *_activityDataPreview;
    NSString *_handshakeToken;
    NSString *_inviteeBuildNumber;
    NSString *_inviteeCloudKitAddress;
    ASCodableShareLocations *_inviteeShareLocations;
    unsigned int _inviteeVersion;
    int _responseCode;
    struct {
        unsigned int inviteeVersion:1;
        unsigned int responseCode:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasHandshakeToken;
@property (retain, nonatomic) NSString *handshakeToken;
@property (nonatomic) _Bool hasResponseCode;
@property (nonatomic) int responseCode;
@property (nonatomic, readonly) _Bool hasInviteeCloudKitAddress;
@property (retain, nonatomic) NSString *inviteeCloudKitAddress;
@property (nonatomic, readonly) _Bool hasInviteeShareLocations;
@property (retain, nonatomic) ASCodableShareLocations *inviteeShareLocations;
@property (nonatomic, readonly) _Bool hasInviteeBuildNumber;
@property (retain, nonatomic) NSString *inviteeBuildNumber;
@property (nonatomic) _Bool hasInviteeVersion;
@property (nonatomic) unsigned int inviteeVersion;
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
