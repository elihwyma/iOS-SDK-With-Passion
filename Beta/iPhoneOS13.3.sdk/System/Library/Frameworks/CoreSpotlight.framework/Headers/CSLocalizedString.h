/*
 Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

#import <Foundation/NSString.h>

@class NSDictionary;

@interface CSLocalizedString : NSString

{
    _Bool _didTrySettingDefaultString;
    NSString *_defaultString;
    NSDictionary *_localizedStrings;
}

@property (nonatomic, readonly) NSString *defaultString;
@property (nonatomic) _Bool didTrySettingDefaultString;
@property (nonatomic, readonly) NSDictionary *localizedStrings;

+ (_Bool)supportsSecureCoding;

- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)localizedString;
- (id)initWithLocalizedStrings:(id)arg1;
- (void)encodeWithCSCoder:(id)arg1;

@end
