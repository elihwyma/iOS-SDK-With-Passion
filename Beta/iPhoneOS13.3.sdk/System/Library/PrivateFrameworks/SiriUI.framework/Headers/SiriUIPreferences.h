/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSUserDefaults;

@interface SiriUIPreferences : NSObject

{
    NSUserDefaults *_userDefaults;
    long long _numberOfTimesSiriCardShown;
    _Bool _voiceRequestMadeWhileInCarDND;
}

+ (id)sharedPreferences;

- (id)init;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setVoiceRequestMadeWhileInCarDND:(_Bool)arg1;
- (_Bool)voiceRequestMadeWhileInCarDND;
- (long long)numberOfTimesCarDNDSiriCardShown;
- (void)setNumberOfTimesCarDNDSiriCardShown:(long long)arg1;

@end
