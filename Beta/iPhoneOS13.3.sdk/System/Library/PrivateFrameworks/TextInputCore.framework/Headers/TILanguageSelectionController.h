/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, TIInputMode, TILanguageModelAdaptationContext;

@protocol TILanguageLikelihoodModeling, TILanguageSelectionControllerDelegate, TIMultilingualPreferenceProviding;

@interface TILanguageSelectionController : NSObject

{
    id <TILanguageLikelihoodModeling> _languageLikelihoodModel;
    vector_5bda1073 m_buffered_tokens;
    id <TILanguageSelectionControllerDelegate> _delegate;
    TILanguageModelAdaptationContext *_adaptationContext;
    NSArray *_activeInputModes;
    id <TIMultilingualPreferenceProviding> _preferenceProvider;
    TIInputMode *_primaryInputMode;
    TIInputMode *_preferredSecondaryInputMode;
    TIInputMode *_inferredSecondaryInputMode;
    NSArray *_userEnabledInputModes;
    NSMutableDictionary *_inputModeProbabilities;
    NSDictionary *_referenceInputModeProbabilities;
    NSMutableArray *_bufferedTokenStrings;
}

@property (nonatomic, readonly) id <TILanguageLikelihoodModeling> languageLikelihoodModel;
@property (nonatomic, readonly) id <TIMultilingualPreferenceProviding> preferenceProvider;
@property (retain, nonatomic) TIInputMode *primaryInputMode;
@property (retain, nonatomic) TIInputMode *preferredSecondaryInputMode;
@property (retain, nonatomic) TIInputMode *inferredSecondaryInputMode;
@property (retain, nonatomic) NSArray *userEnabledInputModes;
@property (retain, nonatomic) NSArray *activeInputModes;
@property (nonatomic, readonly) NSMutableDictionary *inputModeProbabilities;
@property (copy, nonatomic) NSDictionary *referenceInputModeProbabilities;
@property (nonatomic, readonly) NSMutableArray *bufferedTokenStrings;
@property (nonatomic) id <TILanguageSelectionControllerDelegate> delegate;
@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext;

+ (id)sharedLanguageLikelihoodModel;
+ (id)inferSecondaryInputModeForPrimary:(id)arg1 enabled:(id)arg2 enabledExcludingPreferredLanguages:(id)arg3;
+ (void)reportTypedTokens:(const vector_5bda1073 *)arg1 activeInputModes:(id)arg2;
+ (id)inferInputModeForLanguage:(id)arg1 enabled:(id)arg2;
+ (id)multilingualInputModesForInputModes:(id)arg1;
+ (id)inputModesForLanguageIdentifiers:(id)arg1;
+ (id)inferSecondaryInputModeForPrimary:(id)arg1 enabled:(id)arg2;
+ (id)inputModeForLanguageIdentifier:(id)arg1;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)flushBuffer;
- (void)appleKeyboardsInternalSettingsChanged:(id)arg1;
- (void)appleKeyboardsPreferencesChanged:(id)arg1;
- (double)lastOfflineAdaptationTimeForApp:(id)arg1;
- (id)initWithLanguageLikelihoodModel:(id)arg1 preferenceProvider:(id)arg2;
- (id)fetchUserEnabledInputModes;
- (id)fetchUserEnabledInputModesExcludingPreferredLanguages;
- (id)fetchPreferredSecondaryInputMode;
- (void)updateActiveInputModesSuppressingNotification:(_Bool)arg1;
- (_Bool)didProbabilityChangeSignificantly;
- (_Bool)updateInputModeProbabilities;
- (void)feedBufferedTokenStringsToModel;
- (float)priorProbabilityForInputMode:(id)arg1;
- (_Bool)bufferIsCompatibleWithContext:(const struct TITokenID *)arg1 contextLength:(unsigned long long)arg2;
- (void)addTokenString:(id)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4;
- (void)removeTokenString:(id)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID *)arg3 contextLength:(unsigned long long)arg4;

@end
