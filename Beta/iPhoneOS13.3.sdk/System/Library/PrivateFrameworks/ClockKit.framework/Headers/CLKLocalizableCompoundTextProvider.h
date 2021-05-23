/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@class NSArray, NSString;

@interface CLKLocalizableCompoundTextProvider

{
    NSArray *_textProviders;
    NSString *_formatKey;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_validate;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;
- (id)_arrayOfTextProviderJSONObjectRepresentations;
- (id)initWithFormatKey:(id)arg1 textProviders:(id)arg2;
- (id)_localizedTextProviderWithBundle:(id)arg1 forLocalization:(id)arg2;
- (id)_localizedStringForKey:(id)arg1 withBundle:(id)arg2 forLocalization:(id)arg3;

@end
