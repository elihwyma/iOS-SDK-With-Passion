/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface CSBluetoothWirelessSplitterInfo : NSObject

{
    NSMutableArray *_splitterDeviceList;
    _Bool _splitterEnabled;
}

@property (nonatomic) _Bool splitterEnabled;
@property (nonatomic, readonly) _Bool shouldDisableSpeakerVerificationInSplitterMode;

- (id)init;
- (id)description;
- (unsigned long long)splitterState;
- (_Bool)_hasDeviceTemporaryPairedNotInContacts;
- (id)splitterDeviceList;
- (void)addDeviceIntoSplitterDeviceList:(id)arg1;

@end
