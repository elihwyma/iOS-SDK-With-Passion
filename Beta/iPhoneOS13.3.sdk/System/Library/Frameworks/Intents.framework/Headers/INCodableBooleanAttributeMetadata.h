/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttributeMetadata.h>

@class NSNumber, NSString;

@interface INCodableBooleanAttributeMetadata : INCodableAttributeMetadata

{
    NSNumber *_defaultValue;
    NSString *_falseDisplayName;
    NSString *_falseDisplayNameID;
    NSString *_trueDisplayName;
    NSString *_trueDisplayNameID;
}

@property (copy, nonatomic) NSNumber *defaultValue;
@property (copy, nonatomic) NSString *falseDisplayName;
@property (copy, nonatomic) NSString *falseDisplayNameID;
@property (copy, nonatomic) NSString *trueDisplayName;
@property (copy, nonatomic) NSString *trueDisplayNameID;
@property (copy, nonatomic, readonly) NSString *localizedTrueDisplayName;
@property (copy, nonatomic, readonly) NSString *localizedFalseDisplayName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)localizedTrueDisplayNameForLanguage:(id)arg1;
- (id)localizedFalseDisplayNameForLanguage:(id)arg1;

@end
