/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FigNSURLSessionRegistry : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_sessionArray;
}

- (id)init;
- (void)dealloc;
- (void)_checkForDoom:(id)arg1;
- (void)copySessionAndAssertionForClientBundleIdentifier:(id)arg1 dispatchQueue:(id)arg2 outSession:(id *)arg3 outAssertion:(struct FigOpaqueAssertion **)arg4;
- (void)releaseSession:(id)arg1;

@end
