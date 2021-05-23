/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBRequest.h>

@class NSMutableArray;

@interface CPLRampingRequest : PBRequest

{
    NSMutableArray *_requests;
}

@property (retain, nonatomic) NSMutableArray *requests;

+ (Class)requestType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearRequests;
- (void)addRequest:(id)arg1;
- (unsigned long long)requestsCount;
- (id)requestAtIndex:(unsigned long long)arg1;

@end
