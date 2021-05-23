/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <_PASZonedObject.h>

@interface PPNamedEntityMetadata : _PASZonedObject

{
    unsigned short _impressionCount;
    unsigned short _occurrencesInSource;
}

@property (nonatomic, readonly) unsigned short impressionCount;
@property (nonatomic, readonly) unsigned short occurrencesInSource;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImpressionCount:(unsigned short)arg1 occurrencesInSource:(unsigned short)arg2;
- (_Bool)isEqualToNamedEntityMetadata:(id)arg1;

@end
