/*
 Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

#import <PBCodable.h>

@class NSString;

@interface CLPContext : PBCodable

{
    NSString *_bundleCategory;
    int _type;
    int _workoutType;
    _Bool _isDriving;
    struct {
        unsigned int type:1;
        unsigned int workoutType:1;
        unsigned int isDriving:1;
    } _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic) _Bool hasIsDriving;
@property (nonatomic) _Bool isDriving;
@property (nonatomic) _Bool hasWorkoutType;
@property (nonatomic) int workoutType;
@property (nonatomic, readonly) _Bool hasBundleCategory;
@property (retain, nonatomic) NSString *bundleCategory;

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
