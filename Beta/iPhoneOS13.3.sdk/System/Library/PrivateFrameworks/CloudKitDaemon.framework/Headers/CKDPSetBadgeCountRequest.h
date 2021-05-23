/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

__attribute__((visibility("hidden")))
@interface CKDPSetBadgeCountRequest : PBRequest

{
    unsigned int _badgeCount;
    _Bool _forDevice;
    struct {
        unsigned int badgeCount:1;
        unsigned int forDevice:1;
    } _has;
}

@property (nonatomic) _Bool hasBadgeCount;
@property (nonatomic) unsigned int badgeCount;
@property (nonatomic) _Bool hasForDevice;
@property (nonatomic) _Bool forDevice;

+ (id)options;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;

@end
