/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface NSBundle : NSObject

{
    unsigned long long _flags;
    id _cfBundle;
    unsigned long long _reserved2;
    Class _principalClass;
    id _initialPath;
    id _resolvedPath;
    NSString *_firstClassName;
    struct os_unfair_lock_s _lock;
}

@property (readonly, getter=isLoaded) _Bool loaded;
@property (copy, readonly) NSURL *bundleURL;
@property (copy, readonly) NSURL *resourceURL;
@property (copy, readonly) NSURL *executableURL;
@property (copy, readonly) NSURL *privateFrameworksURL;
@property (copy, readonly) NSURL *sharedFrameworksURL;
@property (copy, readonly) NSURL *sharedSupportURL;
@property (copy, readonly) NSURL *builtInPlugInsURL;
@property (copy, readonly) NSURL *appStoreReceiptURL;
@property (copy, readonly) NSString *bundlePath;
@property (copy, readonly) NSString *resourcePath;
@property (copy, readonly) NSString *executablePath;
@property (copy, readonly) NSString *privateFrameworksPath;
@property (copy, readonly) NSString *sharedFrameworksPath;
@property (copy, readonly) NSString *sharedSupportPath;
@property (copy, readonly) NSString *builtInPlugInsPath;
@property (copy, readonly) NSString *bundleIdentifier;
@property (copy, readonly) NSDictionary *infoDictionary;
@property (copy, readonly) NSDictionary *localizedInfoDictionary;
@property (readonly) Class principalClass;
@property (copy, readonly) NSArray *preferredLocalizations;
@property (copy, readonly) NSArray *localizations;
@property (copy, readonly) NSString *developmentLocalization;
@property (copy, readonly) NSArray *executableArchitectures;

+ (id)debugDescription;
+ (id)bundleWithPath:(id)arg1;
+ (id)mainBundle;
+ (id)bundleWithURL:(id)arg1;
+ (id)bundleForClass:(Class)arg1;
+ (id)loadedBundles;
+ (id)allBundles;
+ (id)allFrameworks;
+ (id)preferredLocalizationsFromArray:(id)arg1;
+ (id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7;
+ (id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
+ (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4;
+ (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
+ (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3;
+ (void)setSystemLanguages:(id)arg1;
+ (id)bundleWithIdentifier:(id)arg1;
+ (id)_bundleWithIdentifier:(id)arg1 andLibraryName:(id)arg2;
+ (id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2;

- (void)dealloc;
- (id)description;
- (_Bool)load;
- (id)initWithURL:(id)arg1;
- (struct __CFBundle *)_cfBundle;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (_Bool)loadAndReturnError:(id *)arg1;
- (struct __CFBundle *)_cfBundleIfPresent;
- (_Bool)unload;
- (id)initWithPath:(id)arg1;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2;
- (id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(CDUnknownBlockType)arg2;
- (id)pathForResource:(id)arg1 ofType:(id)arg2;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (_Bool)_searchForLocalizedString:(id)arg1 foundKey:(id *)arg2 foundTable:(id *)arg3;
- (id)pathForAuxiliaryExecutable:(id)arg1;
- (id)URLForAuxiliaryExecutable:(id)arg1;
- (unsigned long long)versionNumber;
- (id)bundleLanguages;
- (void)invalidateResourceCache;
- (Class)classNamed:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (void)__static;
- (id)_regionsArray;
- (id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4;
- (id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3;
- (id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4;
- (id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3;
- (_Bool)preflightAndReturnError:(id *)arg1;
- (double)preservationPriorityForTag:(id)arg1;
- (void)setPreservationPriority:(double)arg1 forTags:(id)arg2;
- (void)setPreservationPriority:(double)arg1 forTag:(id)arg2;

@end
