/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol TVRUIDeviceDelegate;

@interface TVRUIUnpairedDevices : NSObject

@property (weak, nonatomic) id <TVRUIDeviceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)name;
- (id)identifier;
- (id)model;
- (_Bool)isEqualToDevice:(id)arg1;
- (void)connect;
- (_Bool)isConnected;
- (_Bool)isConnecting;
- (_Bool)isPaired;
- (void)disconnectUserInitiated;
- (void)disconnectSystemInitiated;
- (_Bool)supportsTouchEvents;
- (_Bool)supportsDonatingIntents;
- (_Bool)hasIdentifier:(id)arg1;
- (void)disconnectWithTimeOut;

@end
