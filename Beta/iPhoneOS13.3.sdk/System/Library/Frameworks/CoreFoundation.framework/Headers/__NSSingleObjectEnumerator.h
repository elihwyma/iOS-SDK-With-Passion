/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface __NSSingleObjectEnumerator : NSEnumerator

{
    id _theCollection;
    id _theObjectToReturn;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (id)nextObject;
- (id)initWithObject:(id)arg1 collection:(id)arg2;

@end
