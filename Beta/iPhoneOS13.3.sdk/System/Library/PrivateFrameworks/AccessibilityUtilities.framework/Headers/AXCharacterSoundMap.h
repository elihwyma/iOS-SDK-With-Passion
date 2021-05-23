/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface AXCharacterSoundMap : NSObject

{
    NSMutableDictionary *_phDictionaries;
}

@property (retain, nonatomic) NSMutableDictionary *phDictionaries;

- (id)init;
- (id)_linguisticStringForCharacter:(id)arg1 language:(id)arg2 linguisticType:(long long)arg3 andVoiceIdentifier:(id)arg4;
- (id)phonemeStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3;
- (id)phoneticStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3;

@end
