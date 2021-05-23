/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSDictionary.h>

@interface NSDictionary (ParsecExtras)

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
- (id)prs_arrayWithClass:(Class)arg1 forKey:(id)arg2;
- (id)prs_objectWithClass:(Class)arg1 forKey:(id)arg2;
- (id)prs_objectWithClassArray:(Class)arg1 forKey:(id)arg2;

@end
