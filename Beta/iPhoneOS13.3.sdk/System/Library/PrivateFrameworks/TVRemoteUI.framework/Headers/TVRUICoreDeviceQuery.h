/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, TVRCDeviceQuery;

@protocol TVRUIDeviceSearchDelegate;

@interface TVRUICoreDeviceQuery : NSObject

{
    _Bool _nearbyDeviceAdded;
    id <TVRUIDeviceSearchDelegate> _delegate;
    TVRCDeviceQuery *_query;
    NSMutableDictionary *_deviceList;
}

@property (weak, nonatomic) id <TVRUIDeviceSearchDelegate> delegate;
@property (retain, nonatomic) TVRCDeviceQuery *query;
@property (retain, nonatomic) NSMutableDictionary *deviceList;
@property (nonatomic) _Bool nearbyDeviceAdded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stop;
- (_Bool)hasStarted;
- (void)startQuery:(id)arg1;
- (void)deviceQueryDidUpdateDevices:(id)arg1;

@end
