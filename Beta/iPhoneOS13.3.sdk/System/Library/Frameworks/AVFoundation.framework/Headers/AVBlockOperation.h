/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVOperation.h>

__attribute__((visibility("hidden")))
@interface AVBlockOperation : AVOperation

{
    CDUnknownBlockType _block;
}

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
