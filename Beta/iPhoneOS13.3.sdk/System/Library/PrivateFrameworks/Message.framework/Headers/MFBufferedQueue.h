/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface MFBufferedQueue : NSObject

{
    unsigned int _maximumSize;
    double _maximumLatency;
    double _timeOfLastFlush;
    NSMutableArray *_queue;
    unsigned int _currentSize;
}

@property (nonatomic, readonly) unsigned int size;
@property (nonatomic) unsigned int maximumSize;
@property (nonatomic) double maximumLatency;

- (id)init;
- (_Bool)isEmpty;
- (void)removeAllObjects;
- (_Bool)flush;
- (_Bool)addItem:(id)arg1;
- (_Bool)_flush;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;
- (unsigned long long)sizeForItem:(id)arg1;
- (_Bool)flushIfNecessary;
- (_Bool)handleItems:(id)arg1;

@end
