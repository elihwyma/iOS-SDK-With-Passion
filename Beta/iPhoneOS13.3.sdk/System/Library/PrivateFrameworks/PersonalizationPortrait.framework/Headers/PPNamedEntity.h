/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <_PASZonedObject.h>

@class NSString, PPNamedEntityRecord;

@interface PPNamedEntity : _PASZonedObject

{
    NSString *_name;
    unsigned long long _category;
    NSString *_bestLanguage;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) NSString *bestLanguage;
@property (nonatomic, readonly) PPNamedEntityRecord *mostRelevantRecord;
@property (nonatomic, readonly) double sentimentScore;

+ (_Bool)supportsSecureCoding;
+ (id)describeCategory:(unsigned long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3 mostRelevantRecord:(id)arg4;
- (id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3;
- (_Bool)isEqualToNamedEntity:(id)arg1;

@end
