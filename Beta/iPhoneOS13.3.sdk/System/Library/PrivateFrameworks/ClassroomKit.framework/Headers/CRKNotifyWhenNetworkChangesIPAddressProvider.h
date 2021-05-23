/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CRKIPAddressProviding, OS_dispatch_queue;

@interface CRKNotifyWhenNetworkChangesIPAddressProvider : NSObject

{
    id <CRKIPAddressProviding> mBaseProvider;
    NSObject<OS_dispatch_queue> *mQueue;
    int mNetworkChangeNotificationToken;
    NSString *_IPAddress;
}

@property (copy, nonatomic) NSString *IPAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)subscribeToNetworkChangeNotifications;
- (id)initWithIPAddressProvider:(id)arg1;
- (void)unsubscribeFromNetworkChangeNotifications;
- (void)networkDidChange;
- (void)networkDidChangeDebounced;

@end
