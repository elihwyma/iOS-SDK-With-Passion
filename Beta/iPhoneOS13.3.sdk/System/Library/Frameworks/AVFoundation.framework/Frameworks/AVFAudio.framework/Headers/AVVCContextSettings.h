/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVVCContextSettings : NSObject

{
    long long _activationMode;
    NSString *_activationDeviceUID;
}

@property (nonatomic) long long activationMode;
@property (retain, nonatomic) NSString *activationDeviceUID;

- (id)initWithMode:(long long)arg1 deviceUID:(id)arg2;

@end
