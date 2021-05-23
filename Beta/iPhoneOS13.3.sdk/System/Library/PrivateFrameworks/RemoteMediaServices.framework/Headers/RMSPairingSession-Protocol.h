/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <RemoteMediaServices/Swift-Protocol.h>

@class NSString;

@protocol RMSPairingSessionDelegate;

@protocol RMSPairingSession <Swift>

@property (weak, nonatomic) id <RMSPairingSessionDelegate> delegate;
@property (retain, nonatomic) NSString *passcode;
@property (retain, nonatomic) NSString *advertisedAppName;
@property (retain, nonatomic) NSString *advertisedDeviceName;
@property (retain, nonatomic) NSString *advertisedDeviceModel;

- (unsigned short)endPairing;
- (unsigned short)beginPairing;
- (unsigned short)unpairService:completionHandler: /* Error: Ran out of types for this method. */;

@end
