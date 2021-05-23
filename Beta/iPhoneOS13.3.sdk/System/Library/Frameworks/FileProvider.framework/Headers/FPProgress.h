/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSProgress.h>

@class NSOperation;

__attribute__((visibility("hidden")))
@interface FPProgress : NSProgress

{
    NSOperation *_operation;
}

- (void)cancel;
- (id)initWithOperation:(id)arg1;

@end
