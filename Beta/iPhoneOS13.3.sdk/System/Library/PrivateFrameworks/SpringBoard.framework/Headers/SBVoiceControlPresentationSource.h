/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BluetoothDevice;

@interface SBVoiceControlPresentationSource : NSObject

{
    BluetoothDevice *_bluetoothDevice;
    long long _sourceType;
}

@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly) BluetoothDevice *bluetoothDevice;

+ (id)sourceFromHomeButton;
+ (id)sourceFromHeadsetButton;
+ (id)sourceFromBluetoothDevice:(id)arg1;

- (id)_initWithSourceType:(long long)arg1;

@end
