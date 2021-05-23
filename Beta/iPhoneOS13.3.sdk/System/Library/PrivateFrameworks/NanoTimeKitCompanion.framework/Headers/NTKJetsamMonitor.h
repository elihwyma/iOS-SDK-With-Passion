/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NTKJetsamInfoFetcher;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NTKJetsamMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_monitorQ;
    NSObject<OS_dispatch_source> *_monitorTimer;
    int _transactionCount;
    NTKJetsamInfoFetcher *_fetcher;
}

+ (id)sharedJetsamMonitor;

- (id)init;
- (void)incrementTransactionCount;
- (void)decrementTransactionCount;

@end
