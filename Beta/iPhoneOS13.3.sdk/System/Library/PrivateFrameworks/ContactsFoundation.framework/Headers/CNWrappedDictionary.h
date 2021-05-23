/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSDictionary.h>

@interface CNWrappedDictionary : NSDictionary

{
    NSDictionary *_underlyingDictionary;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (id)initWithDictionary:(id)arg1;

@end
