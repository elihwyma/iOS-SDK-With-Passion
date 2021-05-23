/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@interface NSObject (TSUAdditions)

+ (_Bool)tsu_overridesSelector:(SEL)arg1 ofBaseClass:(Class)arg2;
+ (_Bool)tsu_object:(id)arg1 isEqualToObject:(id)arg2;

- (void)tsu_performSelector:(SEL)arg1 withValue:(id)arg2;
- (void)tsu_runBlock;
- (void)appendJsonStringToString:(id)arg1;

@end
