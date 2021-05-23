/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSEnumerator.h>

@class NSConcreteMapTable;

__attribute__((visibility("hidden")))
@interface NSConcreteMapTableValueEnumerator : NSEnumerator

{
    NSConcreteMapTable *mapTable;
    unsigned long long counter;
}

+ (id)enumeratorWithMapTable:(id)arg1;

- (void)dealloc;
- (id)nextObject;

@end
