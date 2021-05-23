/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPWebAuthTokenRetrieveRequest : PBRequest

{
    NSString *_apiToken;
    _Bool _forceFetchToken;
    struct {
        unsigned int forceFetchToken:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasApiToken;
@property (retain, nonatomic) NSString *apiToken;
@property (nonatomic) _Bool hasForceFetchToken;
@property (nonatomic) _Bool forceFetchToken;

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
