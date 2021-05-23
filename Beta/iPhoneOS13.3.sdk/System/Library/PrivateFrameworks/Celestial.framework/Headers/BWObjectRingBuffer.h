/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWObjectRingBuffer : NSObject

{
    id *_objects;
    CDStruct_1b6d18a9 *_times;
    int _capacity;
    int _count;
    int _oldest;
    _Bool _ascending;
    _Bool _expectAscending;
}

@property (nonatomic, readonly) int count;
@property (nonatomic) int capacity;
@property (nonatomic, readonly) _Bool ascending;
@property (nonatomic) _Bool expectAscending;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)initWithCapacity:(int)arg1;
- (void)clear;
- (id)firstObject;
- (id)lastObject;
- (CDStruct_1b6d18a9)lastTime;
- (void)_enumerateObjectsStartingAtOffset:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_checkAscendingInsertAt:(int)arg1 object:(id)arg2 forTime:(CDStruct_1b6d18a9)arg3;
- (int)_findClosestOffsetToTimestamp:(CDStruct_1b6d18a9)arg1;
- (void)_reverseEnumerateObjectsStartingAtOffset:(int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsStartingAt:(CDStruct_1b6d18a9)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_forceAscendingTo:(_Bool)arg1;
- (void)appendObject:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)firstTime;
- (id)getObjectForIndex:(int)arg1;
- (CDStruct_1b6d18a9)getTimeForIndex:(int)arg1;
- (void)reverseEnumerateObjectsStartingAt:(CDStruct_1b6d18a9)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)extractTimeRangeFrom:(CDStruct_1b6d18a9)arg1 until:(CDStruct_1b6d18a9)arg2 into:(id)arg3 times:(id)arg4;
- (void)flushEntriesEarlierThan:(CDStruct_1b6d18a9)arg1;

@end
