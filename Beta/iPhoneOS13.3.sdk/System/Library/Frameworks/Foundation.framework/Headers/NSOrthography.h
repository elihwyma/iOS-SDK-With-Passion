/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface NSOrthography : NSObject <Swift>

@property (copy, readonly) NSString *dominantScript;
@property (copy, readonly) NSDictionary *languageMap;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2;
+ (id)_orthographyWithDominantScript:(id)arg1 languageMap:(id)arg2;
+ (id)_scriptNameForScriptIndex:(unsigned long long)arg1;
+ (id)defaultOrthographyForLanguage:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (unsigned int)orthographyFlags;
- (id)dominantLanguage;
- (id)allScripts;
- (id)languagesForScript:(id)arg1;
- (id)dominantLanguageForScript:(id)arg1;
- (id)allLanguages;

@end
