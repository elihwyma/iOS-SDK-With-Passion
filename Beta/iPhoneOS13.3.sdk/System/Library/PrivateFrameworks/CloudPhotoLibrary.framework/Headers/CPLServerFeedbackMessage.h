/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface CPLServerFeedbackMessage : PBCodable

{
    NSMutableArray *_keysAndValues;
}

@property (retain, nonatomic) NSMutableArray *keysAndValues;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearKeysAndValues;
- (void)addKeysAndValues:(id)arg1;
- (unsigned long long)keysAndValuesCount;
- (id)keysAndValuesAtIndex:(unsigned long long)arg1;

@end
