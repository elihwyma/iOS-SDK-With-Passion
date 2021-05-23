/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BLTBulletinDistributorSubscriberList, NSString, NSXPCListener;

@protocol BLTBulletinDistributorSubscriberDeviceDelegate;

@interface BLTPingSubscriberManager : NSObject

{
    BLTBulletinDistributorSubscriberList *_subscribers;
    NSXPCListener *_listener;
    id <BLTBulletinDistributorSubscriberDeviceDelegate> _deviceDelegate;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) id <BLTBulletinDistributorSubscriberDeviceDelegate> deviceDelegate;
@property (retain, nonatomic) BLTBulletinDistributorSubscriberList *subscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_loadPingSubscriberBundles:(id)arg1;
- (id)initWithDeviceDelegate:(id)arg1;

@end
