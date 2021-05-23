/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttributeMetadata.h>

@class NSString;

@interface INCodableStringAttributeMetadata : INCodableAttributeMetadata

{
    _Bool _multiline;
    _Bool _disableAutocorrect;
    _Bool _disableSmartDashes;
    _Bool _disableSmartQuotes;
    NSString *_defaultValue;
    NSString *_defaultValueID;
    long long _capitalization;
}

@property (nonatomic, getter=isMultiline) _Bool multiline;
@property (nonatomic) _Bool disableAutocorrect;
@property (nonatomic) _Bool disableSmartDashes;
@property (nonatomic) _Bool disableSmartQuotes;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *defaultValueID;
@property (nonatomic) long long capitalization;
@property (copy, nonatomic, readonly) NSString *localizedDefaultValue;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)localizedDefaultValueForLanguage:(id)arg1;

@end
