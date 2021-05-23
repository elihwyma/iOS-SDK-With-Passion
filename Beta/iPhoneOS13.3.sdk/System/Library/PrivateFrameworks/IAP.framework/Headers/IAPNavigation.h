/*
 Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

#import <Foundation/NSObject.h>

@class NSNotificationCenter, NSSet;

@protocol IAPNavigationDelegate, OS_dispatch_queue, OS_xpc_object;

@interface IAPNavigation : NSObject

{
    struct __CFNotificationCenter *_darwinNotificationCenter;
    NSNotificationCenter *_localNotificationCenter;
    _Bool _connected;
    id <IAPNavigationDelegate> _delegate;
    NSSet *_availableAccessories;
    NSObject<OS_xpc_object> *_iap2d_connection;
    NSObject<OS_dispatch_queue> *_processingQ;
}

@property (retain) NSObject<OS_xpc_object> *iap2d_connection;
@property _Bool connected;
@property (retain) NSObject<OS_dispatch_queue> *processingQ;
@property (weak) id <IAPNavigationDelegate> delegate;
@property (retain) NSSet *availableAccessories;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)updateNavigationGuidanceInfo:(id)arg1 forAccessory:(id)arg2 withComponent:(id)arg3;
- (void)_iap2d_server_did_launch;
- (void)_iap2d_server_did_die;
- (void)_getConnectedAccessories;
- (void)_updateInternalStateWithArrayOfAccessories:(id)arg1;
- (id)_convert_xpc_array_to_NSArray:(id)arg1;
- (void)updateNavigationManeuverInfo:(id)arg1 forAccessory:(id)arg2 withComponent:(id)arg3;

@end
