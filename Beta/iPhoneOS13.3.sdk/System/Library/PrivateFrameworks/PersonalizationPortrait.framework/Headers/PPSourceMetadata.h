/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <_PASZonedObject.h>

@interface PPSourceMetadata : _PASZonedObject

{
    unsigned char _flags;
    unsigned short _donationCount;
    unsigned int _dwellTimeSeconds;
    unsigned int _lengthSeconds;
    unsigned int _lengthCharacters;
}

@property (nonatomic, readonly) unsigned int dwellTimeSeconds;
@property (nonatomic, readonly) unsigned int lengthSeconds;
@property (nonatomic, readonly) unsigned int lengthCharacters;
@property (nonatomic, readonly) unsigned short donationCount;
@property (nonatomic, readonly) unsigned char flags;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDwellTimeSeconds:(unsigned int)arg1 lengthSeconds:(unsigned int)arg2 lengthCharacters:(unsigned int)arg3 donationCount:(unsigned short)arg4 flags:(unsigned char)arg5;
- (_Bool)isEqualToSourceMetadata:(id)arg1;

@end
