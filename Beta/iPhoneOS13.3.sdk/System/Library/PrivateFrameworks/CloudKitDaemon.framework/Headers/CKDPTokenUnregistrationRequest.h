/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class CKDPTokenRegistrationBody;

__attribute__((visibility("hidden")))
@interface CKDPTokenUnregistrationRequest : PBRequest

{
    CKDPTokenRegistrationBody *_tokenRegistrationBody;
}

@property (nonatomic, readonly) _Bool hasTokenRegistrationBody;
@property (retain, nonatomic) CKDPTokenRegistrationBody *tokenRegistrationBody;

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
