/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATTaskServer, NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSString;

@interface CATTaskBlockServer : NSObject

{
    CATTaskServer *mServer;
    NSMutableDictionary *mOperationBlocksByRequestClassName;
    NSMutableSet *mLongRunningOperationRequestClassNames;
    NSMapTable *mLongRunningOperationsByUUID;
    NSArray *_clientSessions;
    CDUnknownBlockType _sessionDidConnect;
    CDUnknownBlockType _sessionDidReceiveNotification;
    CDUnknownBlockType _sessionDidInterruptWithError;
    CDUnknownBlockType _sessionDidDisconnect;
    CDUnknownBlockType _sessionDidInvalidate;
    CDUnknownBlockType _didInvalidate;
}

@property (copy, nonatomic, readonly) NSArray *clientSessions;
@property (copy, nonatomic) CDUnknownBlockType sessionDidConnect;
@property (copy, nonatomic) CDUnknownBlockType sessionDidReceiveNotification;
@property (copy, nonatomic) CDUnknownBlockType sessionDidInterruptWithError;
@property (copy, nonatomic) CDUnknownBlockType sessionDidDisconnect;
@property (copy, nonatomic) CDUnknownBlockType sessionDidInvalidate;
@property (copy, nonatomic) CDUnknownBlockType didInvalidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)serverDidInvalidate:(id)arg1;
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)disconnectAllClientSessions;
- (id)server:(id)arg1 clientSession:(id)arg2 operationForRequest:(id)arg3 error:(id *)arg4;
- (void)server:(id)arg1 clientSession:(id)arg2 didInterruptWithError:(id)arg3;
- (void)server:(id)arg1 clientSession:(id)arg2 didReceiveNotificationWithName:(id)arg3 userInfo:(id)arg4;
- (void)server:(id)arg1 clientSessionDidConnect:(id)arg2;
- (void)server:(id)arg1 clientSessionDidDisconnect:(id)arg2;
- (void)server:(id)arg1 clientSessionDidInvalidate:(id)arg2;
- (id)createClientTransport;
- (void)registerBlock:(CDUnknownBlockType)arg1 forRequestClass:(Class)arg2;
- (void)registerLongRunningOperationForRequestClass:(Class)arg1;
- (void)cancelLongRunningOperationsForRequestClass:(Class)arg1;

@end
