/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@interface IMTranscriptEffectHelper : NSObject

+ (_Bool)isFeatureEnabled;
+ (id)identifierNameMap;
+ (_Bool)identifierIsEffectIdentifier:(id)arg1;
+ (id)allEffectIdentifiers;
+ (id)replayStringMap;
+ (id)sendWithEffectStringMap;
+ (_Bool)effectIdentifierIsFullScreenMoment:(id)arg1;
+ (_Bool)effectIdentifierIsImpactEffect:(id)arg1;
+ (id)findIdentifierByMathcingPartialSufix:(id)arg1;
+ (id)nameForEffectIdentifier:(id)arg1;
+ (id)replayStringForEffectIdentifier:(id)arg1;
+ (id)sendWithStringForEffectIdentifier:(id)arg1;
+ (_Bool)shouldShowReplayButtonForEffectIdentifier:(id)arg1;
+ (void)setFeatureEnabled:(_Bool)arg1;

@end
