/*
 Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <VoiceServices/VSAssetBase.h>

@interface VSVoiceAsset : VSAssetBase

+ (_Bool)supportsSecureCoding;
+ (long long)typeFromString:(id)arg1;
+ (long long)genderFromString:(id)arg1;
+ (id)typeStringFromType:(long long)arg1;
+ (id)genderStringFromGender:(long long)arg1;
+ (id)footprintStringFromFootprint:(long long)arg1;
+ (long long)footprintFromString:(id)arg1;

@end
