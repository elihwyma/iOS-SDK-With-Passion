/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSString.h>

@interface NSLocalizableString : NSString

{
    NSString *_stringsFileKey;
    NSString *_developmentLanguageString;
}

@property (copy, readonly) NSString *stringsFileKey;
@property (copy, readonly) NSString *developmentLanguageString;

+ (_Bool)supportsSecureCoding;
+ (id)localizableStringWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2;

- (void)dealloc;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2;
- (void)setStringsFileKey:(id)arg1;
- (void)setDevelopmentLanguageString:(id)arg1;

@end
