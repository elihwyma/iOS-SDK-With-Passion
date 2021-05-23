/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions : PBCodable

{
    unsigned long long _contentRequestAuthorizeGetOptions;
    NSMutableArray *_contentRequestHeaders;
    CDStruct_3f29eb26 _has;
}

@property (retain, nonatomic) NSMutableArray *contentRequestHeaders;
@property (nonatomic) _Bool hasContentRequestAuthorizeGetOptions;
@property (nonatomic) unsigned long long contentRequestAuthorizeGetOptions;

+ (Class)contentRequestHeadersType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addContentRequestHeaders:(id)arg1;
- (unsigned long long)contentRequestHeadersCount;
- (void)clearContentRequestHeaders;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;

@end
