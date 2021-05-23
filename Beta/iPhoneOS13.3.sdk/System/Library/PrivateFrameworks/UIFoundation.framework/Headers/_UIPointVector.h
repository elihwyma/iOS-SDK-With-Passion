/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _UIPointVector : NSObject

{
    unsigned long long _count;
    unsigned long long _capacity;
    MISSING_TYPE **_vectors;
}

@property (nonatomic) unsigned long long capacity;
@property (nonatomic) unsigned long long count;
@property (nonatomic) MISSING_TYPE **vectors;

- (id)init;
- (void)dealloc;
- (void)clear;
- (void)reset;
- (void)addVector: /* Error: Ran out of types for this method. */;
- (void)removeVectorAtIndex:(unsigned long long)arg1;
- (MISSING_TYPE *)vectorAtIndex:(unsigned long long)arg1;
- (MISSING_TYPE *)lastVector;

@end
