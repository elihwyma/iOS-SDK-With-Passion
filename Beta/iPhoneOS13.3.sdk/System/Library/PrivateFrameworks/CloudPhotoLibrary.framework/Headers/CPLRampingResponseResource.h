/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBCodable.h>

@class NSString;

@interface CPLRampingResponseResource : PBCodable

{
    long long _retryAfterMillis;
    NSString *_resource;
    _Bool _allowed;
    struct {
        unsigned int retryAfterMillis:1;
        unsigned int allowed:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasResource;
@property (retain, nonatomic) NSString *resource;
@property (nonatomic) _Bool hasAllowed;
@property (nonatomic) _Bool allowed;
@property (nonatomic) _Bool hasRetryAfterMillis;
@property (nonatomic) long long retryAfterMillis;

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
