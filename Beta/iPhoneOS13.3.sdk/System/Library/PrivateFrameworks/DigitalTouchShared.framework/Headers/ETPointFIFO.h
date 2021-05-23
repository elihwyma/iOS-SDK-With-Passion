/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface ETPointFIFO : NSObject

{
    ETPointFIFO *_nextFIFO;
}

@property (retain, nonatomic) ETPointFIFO *nextFIFO;

- (void)clear;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (void)addPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)emitPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;

@end
