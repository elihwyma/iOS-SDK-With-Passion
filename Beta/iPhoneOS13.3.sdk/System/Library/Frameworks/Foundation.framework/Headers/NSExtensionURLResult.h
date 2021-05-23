/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSExtensionURLResult : NSObject

{
    NSObject<OS_dispatch_semaphore> *_sema;
    NSURL *_url;
    struct os_unfair_lock_s _lock;
}

@property (copy, setter=setURL:) NSURL *url;

- (id)init;
- (void)dealloc;
- (void)signal;
- (id)copiedURL;
- (_Bool)wait:(double)arg1;

@end
