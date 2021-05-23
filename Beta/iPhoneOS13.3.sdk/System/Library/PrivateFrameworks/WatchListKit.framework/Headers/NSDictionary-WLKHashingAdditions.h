/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (WLKHashingAdditions)

- (id)_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)wlk_stringForKey:(id)arg1;
- (id)wlk_dictionaryForKey:(id)arg1;
- (id)wlk_arrayForKey:(id)arg1;
- (_Bool)wlk_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)wlk_artworkVariantListingForKey:(id)arg1;
- (id)wlk_numberForKey:(id)arg1;
- (id)wlk_caseInsensitiveValueForKey:(id)arg1;
- (id)wlk_dateFromMillisecondsSince1970ForKey:(id)arg1;
- (unsigned long long)wlk_deepHash;
- (id)wlk_dateForKey:(id)arg1;
- (id)wlk_dataForKey:(id)arg1;

@end
