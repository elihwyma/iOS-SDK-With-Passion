/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWObjectRingBuffer.h>

@interface BWObjectRingBufferThreadSafe : BWObjectRingBuffer

{
    struct OpaqueFigReentrantMutex *_lock;
}

- (void)dealloc;
- (id)description;
- (id)initWithCapacity:(int)arg1;
- (void)clear;
- (id)firstObject;
- (id)lastObject;
- (void)setCapacity:(int)arg1;
- (CDStruct_1b6d18a9)lastTime;
- (void)enumerateObjectsStartingAt:(CDStruct_1b6d18a9)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)appendObject:(id)arg1 forTime:(CDStruct_1b6d18a9)arg2;
- (CDStruct_1b6d18a9)firstTime;
- (void)reverseEnumerateObjectsStartingAt:(CDStruct_1b6d18a9)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)extractTimeRangeFrom:(CDStruct_1b6d18a9)arg1 until:(CDStruct_1b6d18a9)arg2 into:(id)arg3 times:(id)arg4;
- (void)flushEntriesEarlierThan:(CDStruct_1b6d18a9)arg1;

@end
