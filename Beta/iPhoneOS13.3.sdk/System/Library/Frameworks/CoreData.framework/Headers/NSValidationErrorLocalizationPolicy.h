/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NSValidationErrorLocalizationPolicy : NSObject

{
    NSURL *_url;
    NSBundle *_localizationBundle;
    NSString *_modelStringsFileName;
    NSDictionary *_localizationDictionary;
    _Bool _hasSetLocalizationDictionary;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)localizedEntityNameForEntity:(id)arg1;
- (id)localizedPropertyNameForProperty:(id)arg1;
- (id)localizedModelStringForKey:(id)arg1;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (id)localizationDictionary;
- (void)setLocalizationDictionary:(id)arg1;
- (void)_ensureLocalizationDictionaryIsInitialized;
- (id)_localizedStringForKey:(id)arg1 value:(void *)arg2;
- (id)_cachedObjectForKey:(id)arg1 value:(void *)arg2;
- (id)_localizedPropertyNameForProperty:(id)arg1 entity:(id)arg2;

@end
