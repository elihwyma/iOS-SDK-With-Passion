/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (TVPlaybackAdditions)

- (long long)tvp_appleTimingAppHeaderValue;
- (id)_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)tvp_numberForKey:(id)arg1;
- (id)tvp_stringForKey:(id)arg1;
- (id)tvp_URLForKey:(id)arg1;
- (_Bool)tvp_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)tvp_dateForKey:(id)arg1;
- (id)tvp_dateFromMillisecondsSince1970ForKey:(id)arg1;
- (id)tvp_dictionaryForKey:(id)arg1;
- (id)tvp_arrayForKey:(id)arg1;
- (id)tvp_dataForKey:(id)arg1;

@end
