/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSKeyValueFastMutableArray.h>

@class NSKeyValueNonmutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray1 : NSKeyValueFastMutableArray

{
    NSKeyValueNonmutatingArrayMethodSet *_nonmutatingMethods;
}

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectsAtIndexes:(id)arg1;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;

@end
