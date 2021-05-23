/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSCoder.h>

@interface NSCoder (ParsecExtras)

- (id)prs_numberForKey:(id)arg1;
- (id)prs_arrayForKey:(id)arg1;
- (id)prs_dictionaryForKey:(id)arg1;
- (_Bool)prs_boolForKey:(id)arg1;
- (id)prs_stringForKey:(id)arg1;
- (id)prs_dataForKey:(id)arg1;
- (id)prs_dateForKey:(id)arg1;
- (id)prs_URLForKey:(id)arg1;
- (long long)prs_integerForKey:(id)arg1;
- (int)prs_intForKey:(id)arg1;
- (float)prs_floatForKey:(id)arg1;
- (double)prs_doubleForKey:(id)arg1;
- (double)prs_timestampForKey:(id)arg1;

@end
