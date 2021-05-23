/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBRequest.h>

@class ASCodableActivityDataPreview, NSString;

@interface ASCodableInviteRequest : PBRequest

{
    ASCodableActivityDataPreview *_activityDataPreview;
    NSString *_handshakeToken;
    NSString *_inviterBuildNumber;
    NSString *_inviterCallerID;
    NSString *_inviterCloudKitAddress;
    unsigned int _inviterVersion;
    struct {
        unsigned int inviterVersion:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasHandshakeToken;
@property (retain, nonatomic) NSString *handshakeToken;
@property (nonatomic, readonly) _Bool hasInviterCloudKitAddress;
@property (retain, nonatomic) NSString *inviterCloudKitAddress;
@property (nonatomic, readonly) _Bool hasInviterCallerID;
@property (retain, nonatomic) NSString *inviterCallerID;
@property (nonatomic, readonly) _Bool hasInviterBuildNumber;
@property (retain, nonatomic) NSString *inviterBuildNumber;
@property (nonatomic) _Bool hasInviterVersion;
@property (nonatomic) unsigned int inviterVersion;
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
