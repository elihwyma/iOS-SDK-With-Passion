/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface CPLFaceAnalysis : PBCodable

{
    NSMutableArray *_faceInstances;
    _Bool _completed;
    struct {
        unsigned int completed:1;
    } _has;
}

@property (nonatomic) _Bool hasCompleted;
@property (nonatomic) _Bool completed;
@property (retain, nonatomic) NSMutableArray *faceInstances;

+ (Class)faceInstancesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearFaceInstances;
- (void)addFaceInstances:(id)arg1;
- (unsigned long long)faceInstancesCount;
- (id)faceInstancesAtIndex:(unsigned long long)arg1;

@end
