/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttributeMetadata.h>

@class NSNumber;

@interface INCodableNumberAttributeMetadata : INCodableAttributeMetadata

{
    long long _type;
    NSNumber *_defaultValue;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
}

@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *defaultValue;
@property (retain, nonatomic) NSNumber *minimumValue;
@property (retain, nonatomic) NSNumber *maximumValue;
@property (nonatomic, readonly) _Bool supportsNegativeNumbers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)_localizedDialogTokensForLanguage:(id)arg1;

@end
