/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSEnumerator.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OITSUAggregateEnumerator : NSEnumerator

{
    NSMutableArray *_objects;
}

+ (id)aggregateEnumeratorWithObjects:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)addObject:(id)arg1;
- (id)nextObject;
- (id)initWithObjects:(id)arg1;
- (id)initWithFirstObject:(id)arg1 argumentList:(char *)arg2;

@end
