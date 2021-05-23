/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ACHCodablePlaceholderValue : PBCodable

{
    NSString *_placeholder;
    NSString *_value;
}

@property (nonatomic, readonly) _Bool hasPlaceholder;
@property (retain, nonatomic) NSString *placeholder;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) NSString *value;

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
