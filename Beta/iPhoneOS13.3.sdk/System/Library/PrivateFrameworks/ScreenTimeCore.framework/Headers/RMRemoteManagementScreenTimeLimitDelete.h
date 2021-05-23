/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface RMRemoteManagementScreenTimeLimitDelete : PBCodable

{
    unsigned long long _timestamp;
    NSString *_familyMemberType;
    _Bool _hasPasscode;
    _Bool _isManaged;
    _Bool _isManaging;
    CDStruct_8286c7c8 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasFamilyMemberType;
@property (retain, nonatomic) NSString *familyMemberType;
@property (nonatomic) _Bool hasIsManaged;
@property (nonatomic) _Bool isManaged;
@property (nonatomic) _Bool hasIsManaging;
@property (nonatomic) _Bool isManaging;
@property (nonatomic) _Bool hasHasPasscode;
@property (nonatomic) _Bool hasPasscode;

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
