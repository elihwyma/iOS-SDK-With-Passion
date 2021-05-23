/*
 Image: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface _DASPriorityQueue : NSObject

{
    unsigned long long _count;
    NSMutableDictionary *_objects;
    NSNumber *_lowestPriority;
    NSNumber *_highestPriority;
}

@property (retain, nonatomic) NSMutableDictionary *objects;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSNumber *lowestPriority;
@property (retain, nonatomic) NSNumber *highestPriority;

+ (id)priorityQueue;

- (id)init;
- (id)description;
- (id)allObjects;
- (void)addObject:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)removeObject:(id)arg1 atPriority:(unsigned long long)arg2;
- (id)popFirst;
- (id)popLast;

@end
