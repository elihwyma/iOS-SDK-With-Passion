/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXAccessQueueTimer;

@interface AXPostConnectionTask : NSObject

{
    _Bool _didTimeout;
    CDUnknownBlockType _postConnectionBlock;
    AXAccessQueueTimer *_timeoutTimer;
}

@property (copy, nonatomic) CDUnknownBlockType postConnectionBlock;
@property (retain, nonatomic) AXAccessQueueTimer *timeoutTimer;
@property (nonatomic) _Bool didTimeout;

- (void)_performTask;
- (id)initWithConnectBlock:(CDUnknownBlockType)arg1 timeout:(double)arg2 accessQueue:(id)arg3;
- (void)performTask;

@end
