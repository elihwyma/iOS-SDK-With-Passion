/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSArray, NSMutableDictionary, NSString, _LSLazyPropertyList;

@interface _LSStringLocalizer : NSObject

{
    struct __CFBundle *_bundle;
    NSString *_stringsFile;
    NSMutableDictionary *_stringsFileContent;
    _LSLazyPropertyList *_unlocalizedInfoPlistStrings;
    NSArray *_bundleLocalizations;
    NSArray *_bundleLocalizationsWithDefaultPrefLocs;
}

+ (void)findKeysToLocalizeInInfoDictionary:(id)arg1 forArrayKey:(struct __CFString *)arg2 stringKey:(struct __CFString *)arg3 localizedKeys:(id)arg4;
+ (id)missingLocalizationPlaceholder;
+ (id)IOQueue;
+ (id)frameworkBundleLocalizer;
+ (id)coreTypesLocalizer;
+ (void)gatherLocalizedStringsForCFBundle:(struct __CFBundle *)arg1 infoDictionary:(id)arg2 nameOnly:(_Bool)arg3;
+ (void)setPreferredLocalizationsForXCTests:(id)arg1;
+ (id)localizedStringForCanonicalString:(id)arg1 preferredLocalizations:(id)arg2 context:(struct LSContext *)arg3;
+ (id)preferredLocalizationsForXCTests;

- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithCFBundle:(struct __CFBundle *)arg1 stringsFile:(id)arg2;
- (id)localizedStringWithString:(id)arg1 inBundle:(struct __CFBundle *)arg2 preferredLocalizations:(id)arg3;
- (id)localizedStringWithString:(id)arg1 inBundle:(struct __CFBundle *)arg2 localeCode:(id)arg3;
- (void)enumerateLocalizedStringsForKeys:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)stringsFileContentInBundle:(struct __CFBundle *)arg1 withLocaleCode:(id)arg2;
- (id)localizedStringWithString:(id)arg1 preferredLocalizations:(id)arg2;
- (void)enumerateLocalizedStringsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 bundleUnit:(unsigned int)arg2 delegate:(unsigned int)arg3;
- (id)initWithDatabase:(id)arg1 pluginUnit:(unsigned int)arg2;
- (id)localizedStringDictionaryWithString:(id)arg1 defaultValue:(id)arg2;
- (id)initWithBundleURL:(id)arg1 stringsFile:(id)arg2;
- (id)localizedStringsWithStrings:(id)arg1 preferredLocalizations:(id)arg2;

@end
