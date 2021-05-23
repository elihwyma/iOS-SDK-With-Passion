/*
 Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <Foundation/NSObject.h>

@class AKAppleIDSession;

@protocol OS_dispatch_queue;

@interface FTAuthKitManager : NSObject

{
    AKAppleIDSession *_akAppleIDSession;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void)anisetteHeadersForRequest:(id)arg1 completionBlockQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)handleResponse:(id)arg1 forRequest:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
