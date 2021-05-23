/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/CNContactKeyVector.h>

@interface CNMutableContactKeyVector : CNContactKeyVector

+ (id)new;
+ (id)freezeIfClassIsImmutable:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)freeze;
- (void)addKey:(id)arg1;
- (void)unionKeyVector:(id)arg1;
- (id)initWithKeyVector:(id)arg1;
- (void)addKeys:(id)arg1;
- (void)minusKeyVector:(id)arg1;
- (void)intersectKeyVector:(id)arg1;
- (void)subtractKey:(id)arg1;
- (void)subtractKeys:(id)arg1;

@end
