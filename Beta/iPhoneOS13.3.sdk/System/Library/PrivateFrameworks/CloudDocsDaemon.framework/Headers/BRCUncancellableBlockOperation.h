/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSBlockOperation.h>

__attribute__((visibility("hidden")))
@interface BRCUncancellableBlockOperation : NSBlockOperation

- (void)cancel;
- (_Bool)isCancelled;

@end
