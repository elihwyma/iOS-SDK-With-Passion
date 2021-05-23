/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSString;

@interface AXMLanguage : NSObject

{
    NSString *_primaryComponent;
    NSString *_secondaryComponent;
    NSString *_languageCode;
    NSLocale *_locale;
}

@property (retain, nonatomic) NSString *primaryComponent;
@property (retain, nonatomic) NSString *secondaryComponent;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic, readonly) NSString *languageDisplayName;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (void)_updateDefaultLanguages;
+ (id)currentSystemLanguage;
+ (id)currentLocaleLanguage;
+ (id)languageCodesForLanguages:(id)arg1;
+ (_Bool)languageInSet:(id)arg1 isSupertypeOfLanguage:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (id)initWithLanguageCode:(id)arg1;
- (_Bool)isSupertypeOfLanguage:(id)arg1;
- (_Bool)isSubtypeOfLanguage:(id)arg1;
- (_Bool)isEqualToAXMLanguage:(id)arg1;

@end
