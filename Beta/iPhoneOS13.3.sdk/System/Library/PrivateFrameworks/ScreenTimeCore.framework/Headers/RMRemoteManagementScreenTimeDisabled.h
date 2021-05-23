/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <ProtocolBuffer/PBCodable.h>

@interface RMRemoteManagementScreenTimeDisabled : PBCodable

{
    unsigned long long _daysBeforeDisable;
    unsigned long long _timestamp;
    struct {
        unsigned int daysBeforeDisable:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasDaysBeforeDisable;
@property (nonatomic) unsigned long long daysBeforeDisable;

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
