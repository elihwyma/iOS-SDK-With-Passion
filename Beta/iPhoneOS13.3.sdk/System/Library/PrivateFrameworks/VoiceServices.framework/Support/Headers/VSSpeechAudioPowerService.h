/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol AFAudioPowerProviding;

@interface VSSpeechAudioPowerService : NSObject

{
    id <AFAudioPowerProviding> _previousProvider;
}

@property (weak, nonatomic) id <AFAudioPowerProviding> previousProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedServices;

- (void)willBeginAccessPower;
- (_Bool)getAveragePower:(float *)arg1 andPeakPower:(float *)arg2;
- (void)didEndAccessPower;
- (id)getCurrentAudioPowerProvider;

@end
