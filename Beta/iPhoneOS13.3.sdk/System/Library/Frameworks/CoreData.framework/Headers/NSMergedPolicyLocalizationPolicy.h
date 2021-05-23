/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSValidationErrorLocalizationPolicy.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy

{
    NSSet *_mergedPolicies;
}

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addPolicy:(id)arg1;
- (void)_ensureFullLocalizationDictionaryIsLoaded;
- (id)_localizedStringForKey:(id)arg1 value:(void *)arg2;

@end
