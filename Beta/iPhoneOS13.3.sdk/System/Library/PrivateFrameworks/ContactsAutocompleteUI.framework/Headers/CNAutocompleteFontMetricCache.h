/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocompleteUI.framework/ContactsAutocompleteUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CNAutocompleteFontMetricCache : NSObject

{
    NSString *_preferredSizeValidationKey;
    NSMutableDictionary *_metricCacheDictionary;
}

+ (id)sharedFontMetricCache;

- (id)init;
- (void)_invalidateCache;
- (_Bool)ensureCacheIsValid;
- (id)cachedFont:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (double)cachedFloat:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)_didReceivePreferredFontChangedNotification:(id)arg1;
- (id)cachedPreferredFontForStyle:(id)arg1;
- (double)cachedScaledFloatWithValue:(double)arg1 forKey:(id)arg2;
- (double)cachedScaledFloatWithValue:(double)arg1 fontStyle:(id)arg2;
- (id)metricCacheDictionary;

@end
