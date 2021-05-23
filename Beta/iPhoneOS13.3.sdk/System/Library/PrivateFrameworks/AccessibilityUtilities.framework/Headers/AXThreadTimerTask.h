/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXThreadTimerTask : NSObject

{
    _Bool cancel;
    _Bool finished;
    _Bool active;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;
@property (nonatomic, getter=isCancelled) _Bool cancel;
@property (nonatomic, getter=isFinished) _Bool finished;
@property (nonatomic, getter=isActive) _Bool active;

- (void)run;
- (void)runAfterDelay:(float)arg1;

@end
