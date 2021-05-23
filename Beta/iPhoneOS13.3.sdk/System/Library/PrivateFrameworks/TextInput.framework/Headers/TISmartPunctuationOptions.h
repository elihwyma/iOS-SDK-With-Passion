/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSString;

@interface TISmartPunctuationOptions : NSObject

{
    NSLocale *_locale;
    NSString *_leftSingleQuote;
    NSString *_rightSingleQuote;
    NSString *_apostrophe;
    NSString *_leftDoubleQuote;
    NSString *_rightDoubleQuote;
}

@property (copy, nonatomic) NSString *leftSingleQuote;
@property (copy, nonatomic) NSString *rightSingleQuote;
@property (copy, nonatomic) NSString *apostrophe;
@property (copy, nonatomic) NSString *leftDoubleQuote;
@property (copy, nonatomic) NSString *rightDoubleQuote;
@property (nonatomic, readonly) NSLocale *locale;

+ (_Bool)supportsSecureCoding;
+ (id)smartPunctuationOptionsForLocale:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (void)_generateDataFromLocale;

@end
