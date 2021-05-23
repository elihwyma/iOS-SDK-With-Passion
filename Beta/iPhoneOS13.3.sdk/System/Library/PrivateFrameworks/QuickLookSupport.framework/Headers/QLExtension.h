/*
 Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

#import <Foundation/NSObject.h>

@class NSExtension, NSExtensionContext, NSMutableArray, NSMutableSet, NSXPCConnection, QLGracePeriodTimer;

@protocol OS_dispatch_queue;

@interface QLExtension : NSObject

{
    _Bool _isRequestingExtension;
    NSExtension *_extension;
    long long _extensionScore;
    unsigned long long _externalResourcesPermission;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_completionHandlersQueue;
    NSExtensionContext *_context;
    id _requestIdentifier;
    NSXPCConnection *_connection;
    NSMutableSet *_observers;
    QLGracePeriodTimer *_gracePeriodTimer;
    NSMutableArray *_extensionRequestHandlers;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionHandlersQueue;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSExtensionContext *context;
@property (retain, nonatomic) id requestIdentifier;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMutableSet *observers;
@property (retain, nonatomic) QLGracePeriodTimer *gracePeriodTimer;
@property (retain, nonatomic) NSMutableArray *extensionRequestHandlers;
@property (nonatomic) _Bool isRequestingExtension;
@property long long extensionScore;
@property unsigned long long externalResourcesPermission;

- (void)dealloc;
- (void)_invalidate;
- (void)registerClient:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (id)initWithExtension:(id)arg1;
- (void)invalidateAndCancelExtensionRequest;
- (void)extensionContextWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_invalidateAndCancelExtensionRequest;
- (void)_callExtensionRequestHandlers;
- (void)_setupConnectionIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
