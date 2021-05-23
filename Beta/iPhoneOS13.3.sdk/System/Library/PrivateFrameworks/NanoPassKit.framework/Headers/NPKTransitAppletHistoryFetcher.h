/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NFSession, NPKTransitAppletHistoryFetcherDelegate, OS_dispatch_queue;

@interface NPKTransitAppletHistoryFetcher : NSObject

{
    id <NPKTransitAppletHistoryFetcherDelegate> _delegate;
    NSString *_aidToFetch;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<NFSession> *_pendingSessionHandle;
}

@property (retain, nonatomic) NSString *aidToFetch;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSObject<NFSession> *pendingSessionHandle;
@property (weak, nonatomic) id <NPKTransitAppletHistoryFetcherDelegate> delegate;

- (id)initWithCallbackQueue:(id)arg1;
- (void)_handleActiveSecureElementManagerSession:(id)arg1;
- (void)_handleSecureElementSessionFailureWithError:(id)arg1;
- (void)setAIDToFetch:(id)arg1;
- (void)requestTransitHistoryFetch;

@end
