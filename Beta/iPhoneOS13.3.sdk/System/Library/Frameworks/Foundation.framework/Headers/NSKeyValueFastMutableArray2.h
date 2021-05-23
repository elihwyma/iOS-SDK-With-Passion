/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueFastMutableArray.h>

@class NSKeyValueGetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray

{
    NSKeyValueGetter *_valueGetter;
}

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (id)_nonNilArrayValueWithSelector:(SEL)arg1;

@end
