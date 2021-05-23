/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface NUAnimationQueue : NSObject

{
    _Bool _running;
    NSMutableArray *_queue;
}

@property (nonatomic, readonly) NSMutableArray *queue;
@property (nonatomic, getter=isRunning) _Bool running;

- (id)init;
- (void)cancel;
- (void)addAnimation:(CDUnknownBlockType)arg1;
- (void)runUntilEmpty;

@end
