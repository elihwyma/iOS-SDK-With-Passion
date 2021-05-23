/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMCameraStreamAudioPreferences, HMCameraStreamVideoPreferences;

@interface HMCameraStreamPreferences : NSObject <Swift>

{
    HMCameraStreamAudioPreferences *_audioPreferences;
    HMCameraStreamVideoPreferences *_videoPreferences;
}

@property (nonatomic, readonly) HMCameraStreamAudioPreferences *audioPreferences;
@property (nonatomic, readonly) HMCameraStreamVideoPreferences *videoPreferences;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAudioPreferences:(id)arg1 videoPreferences:(id)arg2;

@end
