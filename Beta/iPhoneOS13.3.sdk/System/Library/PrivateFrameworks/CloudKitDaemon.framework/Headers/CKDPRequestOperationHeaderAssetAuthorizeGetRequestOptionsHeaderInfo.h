/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptionsHeaderInfo : PBCodable

{
    NSString *_headerKey;
    NSString *_headerValue;
}

@property (retain, nonatomic) NSString *headerKey;
@property (retain, nonatomic) NSString *headerValue;

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
