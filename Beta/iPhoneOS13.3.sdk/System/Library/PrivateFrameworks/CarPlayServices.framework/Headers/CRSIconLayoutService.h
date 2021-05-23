/*
 Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionListener, NSHashTable, NSString;

@protocol CRSIconLayoutServiceDelegate, OS_dispatch_queue;

@interface CRSIconLayoutService : NSObject

{
    id <CRSIconLayoutServiceDelegate> _delegate;
    BSServiceConnectionListener *_listener;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSHashTable *_connections;
}

@property (weak, nonatomic) id <CRSIconLayoutServiceDelegate> delegate;
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
- (void)fetchIconStateForVehicleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setIconState:(id)arg1 hiddenIcons:(id)arg2 forVehicleID:(id)arg3;
- (void)resetIconStateForVehicleID:(id)arg1;
- (void)fetchApplicationIconInformationForBundleIdentifier:(id)arg1 vehicleID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
