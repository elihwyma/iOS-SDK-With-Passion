/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (ContactsFoundation)

- (_Bool)_cn_setExtendedAttribute:(id)arg1 forKey:(id)arg2 path:(id)arg3 error:(id *)arg4;
- (id)_cn_extendedAttributeForKey:(id)arg1 path:(id)arg2 error:(id *)arg3;
- (_Bool)_cn_removeExtendedAttributeForKey:(id)arg1 path:(id)arg2 error:(id *)arg3;

@end
