/*
 Image: /System/Library/PrivateFrameworks/CarPlayServices.framework/CarPlayServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnection, NSString;

@protocol OS_dispatch_queue;

@interface CRSIconLayoutController : NSObject

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
- (void)invalidate;
- (void)fetchIconStateForVehicleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetIconStateForVehicleID:(id)arg1;
- (void)fetchApplicationIconInformationForBundleIdentifier:(id)arg1 vehicleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)exportIconStateForCertificateSerial:(id)arg1 categories:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setIconOrder:(id)arg1 hiddenIcons:(id)arg2 forVehicleID:(id)arg3;

@end
