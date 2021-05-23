/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface RMRemoteManagementScreenTimeViewUsage : PBCodable

{
    unsigned long long _daysSinceLastView;
    unsigned long long _timestamp;
    NSString *_familyMemberType;
    _Bool _hasPasscode;
    _Bool _isManaged;
    _Bool _remoteUser;
    struct {
        unsigned int daysSinceLastView:1;
        unsigned int timestamp:1;
        unsigned int hasPasscode:1;
        unsigned int isManaged:1;
        unsigned int remoteUser:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasFamilyMemberType;
@property (retain, nonatomic) NSString *familyMemberType;
@property (nonatomic) _Bool hasIsManaged;
@property (nonatomic) _Bool isManaged;
@property (nonatomic) _Bool hasHasPasscode;
@property (nonatomic) _Bool hasPasscode;
@property (nonatomic) _Bool hasRemoteUser;
@property (nonatomic) _Bool remoteUser;
@property (nonatomic) _Bool hasDaysSinceLastView;
@property (nonatomic) unsigned long long daysSinceLastView;

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
