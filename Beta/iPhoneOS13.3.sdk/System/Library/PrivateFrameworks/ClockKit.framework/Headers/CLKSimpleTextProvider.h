/*
 Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@class NSString;

@interface CLKSimpleTextProvider

{
    _Bool _useNoContentDashFormatting;
    _Bool _useAllSmallCaps;
    NSString *_text;
    NSString *_shortText;
}

@property (nonatomic) _Bool useNoContentDashFormatting;
@property (nonatomic) _Bool useAllSmallCaps;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *shortText;

+ (_Bool)supportsSecureCoding;
+ (id)textProviderWithText:(id)arg1 shortText:(id)arg2;
+ (id)textProviderWithText:(id)arg1 shortText:(id)arg2 accessibilityLabel:(id)arg3;
+ (id)finalizedTextProviderWithText:(id)arg1 monospaceNumbers:(_Bool)arg2;
+ (id)textProviderWithText:(id)arg1;
+ (id)finalizedTextProviderWithText:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_validate;
- (id)attributedString;
- (id)JSONObjectRepresentation;
- (id)_initWithJSONObjectRepresentation:(id)arg1;
- (id)_sessionAttributedTextForIndex:(unsigned long long)arg1 withStyle:(id)arg2;

@end
