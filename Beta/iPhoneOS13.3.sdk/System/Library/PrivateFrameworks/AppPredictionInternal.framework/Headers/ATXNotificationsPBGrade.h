/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ATXNotificationsPBGrade : PBCodable

{
    NSString *_category;
    NSString *_rating;
}

@property (nonatomic, readonly) _Bool hasRating;
@property (retain, nonatomic) NSString *rating;
@property (nonatomic, readonly) _Bool hasCategory;
@property (retain, nonatomic) NSString *category;

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
