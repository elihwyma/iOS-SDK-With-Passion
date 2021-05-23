/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/NFSession.h>

@class NFWeakReference, NSString;

@protocol NFNdefTagSessionDelegate;

@interface NFNdefTagSession : NFSession

{
    NFWeakReference *_delegate;
}

@property id <NFNdefTagSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)generateBluetoothLESecureNdefPayloadWithOOBData:(id)arg1;

- (void)dealloc;
- (void)endSession;
- (_Bool)startEmulationWithNdefMessage:(id)arg1 withMessageType:(unsigned int)arg2;
- (void)didEndUnexpectedly;
- (_Bool)startEmulation:(id)arg1;
- (_Bool)stopEmulation;
- (_Bool)startEmulationWithNdefMessage:(id)arg1 withMessageType:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)startBluetoothLEPairingWithDeviceAddress:(id)arg1 role:(unsigned char)arg2 optionalOOBData:(id)arg3;
- (_Bool)startBluetoothLESecureConnectionWithDeviceAddress:(id)arg1 optionalOOBData:(id)arg2;
- (_Bool)startBluetoothLESecureConnectionWithOOBData:(id)arg1;
- (_Bool)startEmulation:(id)arg1 withMessageType:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)stopEmulationWithError:(id *)arg1;
- (_Bool)setTagData:(id)arg1 error:(id *)arg2;
- (id)getTagDataWithError:(id *)arg1;
- (id)getTagMessageWithError:(id *)arg1;
- (_Bool)enableWrite:(_Bool)arg1 error:(id *)arg2;
- (void)didTagStateChange:(unsigned int)arg1;
- (_Bool)startEmulationWithNdefMessage:(id)arg1;
- (_Bool)startEmulationWithNdefMessage:(id)arg1 error:(id *)arg2;
- (_Bool)startEmulation:(id)arg1 error:(id *)arg2;
- (_Bool)startEmulation:(id)arg1 withMessageType:(unsigned int)arg2;
- (_Bool)setTagMessage:(id)arg1;
- (_Bool)setTagMessage:(id)arg1 error:(id *)arg2;
- (_Bool)setTagData:(id)arg1;
- (id)getTagData;
- (id)getTagMessage;
- (_Bool)enableWrite:(_Bool)arg1;

@end
