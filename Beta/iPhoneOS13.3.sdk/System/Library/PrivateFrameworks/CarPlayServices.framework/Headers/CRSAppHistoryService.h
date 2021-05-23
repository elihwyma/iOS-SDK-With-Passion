/*
 Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, NSHashTable, NSString;

@protocol CRSAppHistoryServiceDelegate, OS_dispatch_queue;

@interface CRSAppHistoryService : NSObject

{
    id <CRSAppHistoryServiceDelegate> _delegate;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSHashTable *_connections;
}

@property (weak, nonatomic) id <CRSAppHistoryServiceDelegate> delegate;
@property (retain, nonatomic) BSServiceConnectionListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSHashTable *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (id)initWithDelegate:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)_connectionQueue_removeConnection:(id)arg1;
- (void)_connectionQueue_addConnection:(id)arg1;
- (void)fetchUIContextStatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSessionUIContextStatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSessionEchoContextStatesWithCompletion:(CDUnknownBlockType)arg1;

@end
