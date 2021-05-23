/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCReachabilityObserver : NSObject

{
    CDUnknownBlockType _networkReachabilityDidChangeHandler;
}

@property (copy, nonatomic) CDUnknownBlockType networkReachabilityDidChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stopObservingNetworkReachabilityChanges;
- (void)networkReachabilityChanged:(_Bool)arg1;
- (void)startObservingNetworkReachabilityChanges;

@end
