/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSArray.h>

@interface NSConstantArray : NSArray

{
    unsigned long long _count;
    const id *_objects;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)new;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)mutableCopy;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)count;
- (id)objectEnumerator;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;

@end
