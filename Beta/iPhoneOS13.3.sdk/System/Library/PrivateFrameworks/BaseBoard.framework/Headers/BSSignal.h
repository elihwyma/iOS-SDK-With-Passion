/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@interface BSSignal : NSObject

{
    _Bool _signalled;
}

- (id)init;
- (void)signal;
- (void)reset;
- (_Bool)hasBeenSignalled;

@end
