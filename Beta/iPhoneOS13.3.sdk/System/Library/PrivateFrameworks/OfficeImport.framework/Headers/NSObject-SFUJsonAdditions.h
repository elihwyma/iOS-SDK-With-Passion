/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@interface NSObject (SFUJsonAdditions)

+ (_Bool)tsu_overridesSelector:(SEL)arg1 ofBaseClass:(Class)arg2;
+ (_Bool)tsu_object:(id)arg1 isEqualToObject:(id)arg2;
+ (_Bool)tsu_overridesClassSelector:(SEL)arg1 ofBaseClass:(Class)arg2;
+ (_Bool)tc_overridesClassMethod:(SEL)arg1;

- (void)tsu_performSelector:(SEL)arg1 withValue:(id)arg2;
- (void)tsu_runBlock;
- (id)tsu_addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)tsu_removeObserverForToken:(id)arg1;
- (void)sfu_appendJsonStringToString:(id)arg1;

@end
