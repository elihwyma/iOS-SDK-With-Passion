/*
 Image: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface AVSpeechSynthesisVoice : NSObject

{
    NSDictionary *_audioFileSettings;
}

@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long quality;
@property (nonatomic) long long gender;
@property (nonatomic, readonly) NSDictionary *audioFileSettings;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)currentLanguageCode;
+ (id)voiceWithLanguage:(id)arg1;
+ (id)speechVoices;
+ (id)voiceWithIdentifier:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
