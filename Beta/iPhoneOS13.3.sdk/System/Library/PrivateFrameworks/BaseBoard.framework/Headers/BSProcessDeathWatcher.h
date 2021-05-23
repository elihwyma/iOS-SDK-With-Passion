/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject

{
    BSDispatchSource *_source;
    CDUnknownBlockType _deathHandler;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithPID:(int)arg1 queue:(id)arg2 deathHandler:(CDUnknownBlockType)arg3;

@end
