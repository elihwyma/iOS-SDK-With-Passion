/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSOperation.h>

@interface QLAsynchronousOperation : NSOperation

{
    _Bool _finished;
    _Bool _executing;
}

@property (nonatomic, getter=isExecuting) _Bool executing;
@property (nonatomic, getter=isFinished) _Bool finished;

- (void)start;
- (_Bool)isConcurrent;
- (void)finish;

@end
