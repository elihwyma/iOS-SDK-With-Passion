/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/VSAssetBase.h>

@class NSArray, NSDictionary, NSURL;

@interface VSVoiceResourceAsset : VSAssetBase

{
    float _rate;
    float _pitch;
    float _volume;
    NSArray *_languages;
    NSURL *_searchPathURL;
    NSDictionary *_voiceConfig;
    NSDictionary *_vocalizerConfig;
    NSArray *_resourceList;
    NSDictionary *_resourceMimeTypes;
}

@property (copy, nonatomic) NSDictionary *voiceConfig;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;
@property (retain, nonatomic) NSDictionary *vocalizerConfig;
@property (copy, nonatomic) NSArray *languages;
@property (copy, nonatomic) NSArray *resourceList;
@property (copy, nonatomic) NSDictionary *resourceMimeTypes;
@property (copy, nonatomic) NSURL *searchPathURL;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)key;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)defaultVoiceType;
- (long long)defaultVoiceGender;
- (id)defaultVoice;
- (long long)defaultVoiceFootprint;
- (id)serverVoiceNameForGender:(long long)arg1;
- (id)defaultTypeString;
- (id)defaultFootprintString;

@end
