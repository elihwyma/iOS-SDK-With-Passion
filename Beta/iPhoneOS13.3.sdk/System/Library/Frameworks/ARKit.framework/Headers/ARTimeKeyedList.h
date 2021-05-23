/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ARTimeKeyedList : NSObject

{
    unsigned long long _maxSize;
    NSMutableArray *_times;
    NSMutableArray *_objects;
}

- (id)init;
- (void)clear;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (void)appendObject:(id)arg1 forTime:(double)arg2;
- (id)nearestObjectForTime:(double)arg1;
- (unsigned long long)insertionIndexForTime:(id)arg1;

@end
