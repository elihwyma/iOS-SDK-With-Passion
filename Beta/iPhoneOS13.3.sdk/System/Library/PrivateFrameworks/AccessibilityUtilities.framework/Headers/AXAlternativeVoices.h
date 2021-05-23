/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AXAlternativeVoices : NSObject

{
    NSMutableDictionary *_voiceClassesMap;
    NSMutableDictionary *_voiceNameMap;
}

@property (retain, nonatomic) NSMutableDictionary *voiceClassesMap;
@property (retain, nonatomic) NSMutableDictionary *voiceNameMap;

+ (id)sharedInstance;
+ (_Bool)supportsSiri;
+ (_Bool)supportsAlex;
+ (void)setInUnitTestMode:(_Bool)arg1;
+ (_Bool)inUnitTestMode;

- (_Bool)isSiriVoiceIdentifier:(id)arg1;
- (id)nameForVoiceIdentifier:(id)arg1;
- (_Bool)isNashvilleSystemVoice:(id)arg1;
- (_Bool)isOldSiriVoiceIdentifier:(id)arg1;
- (id)_siriBaseIdentifierFromIdentifier:(id)arg1;
- (_Bool)isAlternativeVoice:(id)arg1;
- (_Bool)isAlexAvailableForLanguage:(id)arg1;
- (id)voiceForVoiceIdentifier:(id)arg1 forLanguage:(id)arg2;
- (id)_siriIdentifierFromBaseIdentifier:(id)arg1 language:(id)arg2 quality:(long long)arg3;

@end
