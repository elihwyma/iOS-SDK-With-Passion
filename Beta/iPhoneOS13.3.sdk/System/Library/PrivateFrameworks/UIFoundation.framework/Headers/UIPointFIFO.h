/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@interface UIPointFIFO : NSObject

{
    UIPointFIFO *_nextFIFO;
}

@property (retain, nonatomic) UIPointFIFO *nextFIFO;

- (void)dealloc;
- (void)clear;
- (void)flush;
- (void)addPoint: /* Error: Ran out of types for this method. */;
- (void)emitPoint: /* Error: Ran out of types for this method. */;
- (id)initWithFIFO:(id)arg1;

@end
