/*
 Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import <TextToSpeech/TTSAssetBase.h>

@class NSArray, NSDictionary, NSURL;

@interface TTSVoiceResourceAsset : TTSAssetBase

{
    NSArray *_languages;
    NSArray *_resourceList;
    NSURL *_searchPathURL;
    NSDictionary *_voiceConfig;
}

@property (copy, nonatomic) NSDictionary *voiceConfig;
@property (copy, nonatomic) NSArray *languages;
@property (copy, nonatomic) NSArray *resourceList;
@property (copy, nonatomic) NSURL *searchPathURL;

+ (_Bool)supportsSecureCoding;
+ (id)legacyPlatforms;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)defaultVoice;
- (id)defaultTypeString;
- (id)defaultFootprintString;
- (void)syncWithConfigFile:(id)arg1;

@end
