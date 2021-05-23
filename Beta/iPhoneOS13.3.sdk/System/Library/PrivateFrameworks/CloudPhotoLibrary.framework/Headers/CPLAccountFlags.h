/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBCodable.h>

@interface CPLAccountFlags : PBCodable

{
    long long _version;
    int _reason;
    _Bool _defaultHEVC;
    struct {
        unsigned int version:1;
        unsigned int reason:1;
        unsigned int defaultHEVC:1;
    } _has;
}

@property (nonatomic) _Bool hasDefaultHEVC;
@property (nonatomic) _Bool defaultHEVC;
@property (nonatomic) _Bool hasReason;
@property (nonatomic) int reason;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) long long version;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)reasonAsString:(int)arg1;
- (int)StringAsReason:(id)arg1;

@end
