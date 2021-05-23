/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <Foundation/NSObject.h>

@class AMSBTLEPeripheral;

__attribute__((visibility("hidden")))
@interface CABTMIDIIncompleteConnectionInfo : NSObject

{
    _Bool _connecting;
    unsigned long long _timeOutInterval;
    AMSBTLEPeripheral *_peripheral;
}

@property (getter=isConnecting) _Bool connecting;
@property unsigned long long timeOutInterval;
@property (retain, nonatomic) AMSBTLEPeripheral *peripheral;

- (void)dealloc;
- (id)initWithPeripheral:(id)arg1 isConnecting:(_Bool)arg2;

@end
