/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <PBCodable.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICPBDGSRequest, ICPBDGSResponse;

@interface ICPBDGSMessage : PBCodable <Swift>

{
    ICPBDGSRequest *_request;
    ICPBDGSResponse *_response;
}

@property (nonatomic, readonly) _Bool hasRequest;
@property (retain, nonatomic) ICPBDGSRequest *request;
@property (nonatomic, readonly) _Bool hasResponse;
@property (retain, nonatomic) ICPBDGSResponse *response;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
