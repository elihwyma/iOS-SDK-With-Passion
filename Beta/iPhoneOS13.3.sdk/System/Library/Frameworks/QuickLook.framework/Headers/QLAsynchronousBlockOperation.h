/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QLAsynchronousOperation.h>

__attribute__((visibility("hidden")))
@interface QLAsynchronousBlockOperation : QLAsynchronousOperation

{
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;

- (void)main;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
