/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface CPLRampingResponse : PBCodable

{
    NSMutableArray *_responses;
}

@property (retain, nonatomic) NSMutableArray *responses;

+ (Class)responseType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addResponse:(id)arg1;
- (unsigned long long)responsesCount;
- (void)clearResponses;
- (id)responseAtIndex:(unsigned long long)arg1;

@end
