/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSOrthography.h>

@interface NSSimpleOrthography : NSOrthography

{
    unsigned int _orthographyFlags;
}

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)orthographyWithFlags:(unsigned int)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithDominantScript:(id)arg1 languageMap:(id)arg2;
- (unsigned int)orthographyFlags;
- (id)dominantScript;
- (id)languageMap;
- (id)dominantLanguage;
- (id)allScripts;
- (id)languagesForScript:(id)arg1;
- (id)dominantLanguageForScript:(id)arg1;
- (id)allLanguages;
- (id)initWithFlags:(unsigned int)arg1;

@end
