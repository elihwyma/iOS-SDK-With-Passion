/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestAccountConfig : PBCodable

{
    long long _lastWebActivityUTCMills;
    _Bool _corporateSharingEnabled;
    struct {
        unsigned int lastWebActivityUTCMills:1;
        unsigned int corporateSharingEnabled:1;
    } _has;
}

@property (nonatomic) _Bool hasCorporateSharingEnabled;
@property (nonatomic) _Bool corporateSharingEnabled;
@property (nonatomic) _Bool hasLastWebActivityUTCMills;
@property (nonatomic) long long lastWebActivityUTCMills;

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
