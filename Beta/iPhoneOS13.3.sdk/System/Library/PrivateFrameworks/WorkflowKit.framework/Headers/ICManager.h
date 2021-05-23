/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class ICScheme, NSLock, NSMutableArray;

@interface ICManager : NSObject

{
    _Bool _allowsOpeningFromBackground;
    _Bool _enteringForeground;
    _Bool _resignedActiveWhileOpeningURL;
    ICScheme *_callbackScheme;
    NSMutableArray *_queuedRequests;
    NSLock *_queueLock;
}

@property (retain, nonatomic) NSMutableArray *queuedRequests;
@property (retain, nonatomic) NSLock *queueLock;
@property (nonatomic) _Bool enteringForeground;
@property (nonatomic) _Bool resignedActiveWhileOpeningURL;
@property (retain, nonatomic) ICScheme *callbackScheme;
@property (nonatomic) _Bool allowsOpeningFromBackground;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)registerHandler:(CDUnknownBlockType)arg1 forIncomingRequestsWithAction:(id)arg2 scheme:(id)arg3;
- (void)removeHandlerForIncomingRequestsWithAction:(id)arg1 scheme:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1 fromSourceApplication:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (_Bool)handleIncomingRequest:(id)arg1;
- (void)registerHandler:(CDUnknownBlockType)arg1 forIncomingRequestsWithAction:(id)arg2 legacyAction:(id)arg3 scheme:(id)arg4;
- (void)queueRequest:(id)arg1;
- (id)popQueuedRequest;
- (void)performQueuedRequestIfApplicable;
- (void)performRequest:(id)arg1;
- (void)_performRequest:(id)arg1;

@end
