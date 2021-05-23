/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VSWordTimingService : NSObject

{
    NSDictionary *_wordTimings;
}

@property (retain, nonatomic) NSDictionary *wordTimings;

- (id)timingPlistForLanguage:(id)arg1;
- (id)timingInfosFrom:(id)arg1 withText:(id)arg2;
- (id)estimatedTTSWordTimingForText:(id)arg1 withLanguage:(id)arg2 withGender:(long long)arg3;

@end
