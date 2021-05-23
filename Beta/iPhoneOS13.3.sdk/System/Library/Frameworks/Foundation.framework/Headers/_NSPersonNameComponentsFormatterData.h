/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NPNameParser, NSLocale;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsFormatterData : NSObject <Swift>

{
    long long _style;
    _Bool _phonetic;
    _Bool _forceFamilyNameFirst;
    _Bool _forceGivenNameFirst;
    _Bool _ignoresFallbacks;
    NSLocale *_locale;
    NPNameParser *_nameParser;
}

@property long long style;
@property _Bool phonetic;
@property _Bool forceFamilyNameFirst;
@property _Bool forceGivenNameFirst;
@property _Bool ignoresFallbacks;
@property (copy) NSLocale *locale;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToFormatterData:(id)arg1;

@end
