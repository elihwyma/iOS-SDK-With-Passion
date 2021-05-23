/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSMutableDictionary.h>

@interface NSMutableDictionary (CKUtilsAdditions)

- (void)CKAddPropertySafelyForKey:(id)arg1 value:(id)arg2;
- (_Bool)CKSynchronizedSetIfAbsentObject:(id)arg1 forKey:(id)arg2;
- (void)CKSynchronizedRemoveObjectForKey:(id)arg1;

@end
