/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBCodable.h>

@class NSString;

@interface CPLRampingRequestResource : PBCodable

{
    long long _numRequested;
    NSString *_resource;
    struct {
        unsigned int numRequested:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasResource;
@property (retain, nonatomic) NSString *resource;
@property (nonatomic) _Bool hasNumRequested;
@property (nonatomic) long long numRequested;

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
