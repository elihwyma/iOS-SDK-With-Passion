//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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
// - (void).cxx_destruct;
- (void)decrementTransactionCount;
- (void)incrementTransactionCount;
- (id)init;

@end

