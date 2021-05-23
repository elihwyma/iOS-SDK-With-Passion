/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CKDPNotificationSyncRequest : PBRequest

{
    unsigned int _maxChanges;
    NSData *_serverChangeToken;
    _Bool _wantsChanges;
    struct {
        unsigned int maxChanges:1;
        unsigned int wantsChanges:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasServerChangeToken;
@property (retain, nonatomic) NSData *serverChangeToken;
@property (nonatomic) _Bool hasMaxChanges;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) _Bool hasWantsChanges;
@property (nonatomic) _Bool wantsChanges;

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
