//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface GEOServiceRequester : NSObject
{
    NSMapTable *_pendingRequests;
//     struct os_unfair_lock_s _pendingRequestsLock;
}

// - (void).cxx_destruct;
- (id)_validateResponse:(id)arg1;
- (void)_cancelRequest:(id)arg1;
- (void)_startWithRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 config:(id)arg4 throttleToken:(id)arg5 completionHandler:(id /* CDUnknownBlockType */)arg6;
- (id)init;

@end

