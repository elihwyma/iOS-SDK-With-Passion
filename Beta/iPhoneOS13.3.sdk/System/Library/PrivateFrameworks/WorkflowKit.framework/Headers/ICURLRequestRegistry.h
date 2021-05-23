/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ICURLRequestRegistry : NSObject

{
    NSMutableArray *_activeRequests;
    NSMutableDictionary *_requestHandlers;
}

@property (retain, nonatomic) NSMutableArray *activeRequests;
@property (retain, nonatomic) NSMutableDictionary *requestHandlers;

+ (id)sharedRegistry;

- (void)registerHandler:(CDUnknownBlockType)arg1 forIncomingRequestsWithAction:(id)arg2 scheme:(id)arg3;
- (void)removeHandlerForIncomingRequestsWithAction:(id)arg1 scheme:(id)arg2;
- (CDUnknownBlockType)handlerForIncomingRequestWithAction:(id)arg1 scheme:(id)arg2;
- (void)registerOutgoingRequest:(id)arg1;
- (id)popRequest:(id)arg1;
- (id)popActiveRequest;
- (id)popRequestWithUUID:(id)arg1;

@end
