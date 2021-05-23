/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttributeMetadata.h>

@class NSNumber;

@interface INCodableTimeIntervalAttributeMetadata : INCodableAttributeMetadata

{
    long long _defaultUnit;
    long long _minimumUnit;
    long long _maximumUnit;
    NSNumber *_defaultValue;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

@property (nonatomic) long long defaultUnit;
@property (nonatomic) long long minimumUnit;
@property (nonatomic) long long maximumUnit;
@property (retain, nonatomic) NSNumber *defaultValue;
@property (retain, nonatomic) NSNumber *minimumValue;
@property (retain, nonatomic) NSNumber *maximumValue;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;

@end
