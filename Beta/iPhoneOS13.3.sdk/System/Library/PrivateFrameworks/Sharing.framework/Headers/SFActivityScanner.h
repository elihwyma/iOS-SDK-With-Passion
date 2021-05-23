/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@protocol SFActivityScannerDelegate;

@interface SFActivityScanner : NSObject

{
    id <SFActivityScannerDelegate> _delegate;
    NSUUID *_identifier;
}

@property (retain) NSUUID *identifier;
@property (readonly) id <SFActivityScannerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)scanForTypes:(unsigned long long)arg1;
- (void)scanManager:(id)arg1 receivedAdvertisement:(id)arg2;
- (void)scanManager:(id)arg1 foundDeviceWithDevice:(id)arg2;
- (void)scanManager:(id)arg1 lostDeviceWithDevice:(id)arg2;
- (void)scanManager:(id)arg1 pairedDevicesChanged:(id)arg2;
- (void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;

@end
