/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttributeMetadata.h>

@class NSString;

@interface INCodableDateComponentsAttributeMetadata : INCodableAttributeMetadata

{
    long long _type;
    long long _format;
    unsigned long long _dateStyle;
    unsigned long long _timeStyle;
    NSString *_formatString;
    NSString *_formatStringID;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long format;
@property (nonatomic, readonly) unsigned long long dateStyle;
@property (nonatomic, readonly) unsigned long long timeStyle;
@property (copy, nonatomic, readonly) NSString *formatString;
@property (copy, nonatomic, readonly) NSString *formatStringID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedFormatString;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;
- (id)localizedFormatStringForLanguage:(id)arg1;

@end
