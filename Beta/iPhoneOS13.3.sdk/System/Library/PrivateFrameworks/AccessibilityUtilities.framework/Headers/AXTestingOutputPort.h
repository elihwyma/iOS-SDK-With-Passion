/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <AVFoundation/AVAudioSessionPortDescription.h>

@class NSArray, NSString;

@interface AXTestingOutputPort : AVAudioSessionPortDescription

{
    NSString *portType;
    NSString *portName;
    NSString *UID;
    NSArray *_ttsChannels;
}

@property (retain) NSString *portType;
@property (retain) NSString *portName;
@property (retain) NSString *UID;
@property (retain) NSArray *ttsChannels;

- (id)channels;

@end
