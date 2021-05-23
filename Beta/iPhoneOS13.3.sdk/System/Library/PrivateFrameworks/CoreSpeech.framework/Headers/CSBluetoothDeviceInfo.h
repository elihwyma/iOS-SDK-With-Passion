/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CSBluetoothDeviceInfo : NSObject

{
    _Bool _supportDoAP;
    _Bool _isTemporaryPairedNotInContacts;
    NSString *_address;
}

@property (copy, nonatomic) NSString *address;
@property (nonatomic) _Bool supportDoAP;
@property (nonatomic) _Bool isTemporaryPairedNotInContacts;

@end
