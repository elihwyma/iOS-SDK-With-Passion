/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSArray.h>

__attribute__((visibility("hidden")))
@interface __NSArrayReversed : NSArray

{
    id _array;
    unsigned long long _cnt;
}

- (void)dealloc;
- (unsigned long long)count;
- (id)initWithArray:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;

@end
