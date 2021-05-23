/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface __NSHostExtraIvars : NSObject

{
    NSString *thingToResolve;
    int resolveType;
    NSObject<OS_dispatch_queue> *resolveQueue;
    NSObject<OS_dispatch_queue> *cacheAccessQueue;
    NSObject<OS_dispatch_queue> *callbackQueue;
    _Bool startedResolving;
}

@property (retain, nonatomic) NSString *thingToResolve;
@property (nonatomic) int resolveType;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *resolveQueue;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *cacheAccessQueue;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property _Bool startedResolving;

- (id)init;
- (void)dealloc;
- (void)cleanup;

@end
