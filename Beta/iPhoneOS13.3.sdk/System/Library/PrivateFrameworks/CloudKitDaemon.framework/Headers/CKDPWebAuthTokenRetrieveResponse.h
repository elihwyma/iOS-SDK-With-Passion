/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPWebAuthTokenRetrieveResponse : PBCodable

{
    NSString *_containerScopedUserId;
    NSString *_token;
}

@property (nonatomic, readonly) _Bool hasToken;
@property (retain, nonatomic) NSString *token;
@property (nonatomic, readonly) _Bool hasContainerScopedUserId;
@property (retain, nonatomic) NSString *containerScopedUserId;

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
