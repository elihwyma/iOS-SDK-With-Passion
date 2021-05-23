/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface NSOwnedDictionaryProxy : NSDictionary

{
    id _owner;
}

- (id)retain;
- (oneway void)release;
- (unsigned long long)count;
- (id)objectForKey:(id)arg1;
- (id)keyEnumerator;
- (void)superRelease;
- (id)initWithOwner:(id)arg1;

@end
