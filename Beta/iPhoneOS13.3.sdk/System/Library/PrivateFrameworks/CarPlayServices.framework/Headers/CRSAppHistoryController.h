/*
 Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, NSString;

@protocol OS_dispatch_queue;

@interface CRSAppHistoryController : NSObject

{
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (retain, nonatomic) BSServiceConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)fetchUIContextsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSessionUIContextsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSessionEchoContextsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSessionUIContexts:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
