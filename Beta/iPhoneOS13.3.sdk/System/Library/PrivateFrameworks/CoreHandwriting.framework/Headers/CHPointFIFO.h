/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@interface CHPointFIFO : NSObject

{
    CHPointFIFO *_nextFIFO;
}

@property (retain, nonatomic) CHPointFIFO *nextFIFO;

- (void)dealloc;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (void)emitPoint: /* Error: Ran out of types for this method. */;
- (id)initWithFIFO:(id)arg1;

@end
