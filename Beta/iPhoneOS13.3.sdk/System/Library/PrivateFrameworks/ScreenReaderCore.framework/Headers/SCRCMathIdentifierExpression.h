/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression

{
    long long _fontStyle;
}

@property (nonatomic, readonly) long long fontStyle;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isNumber;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2 isPartOfWord:(_Bool)arg3;
- (_Bool)isNaturalSuperscript;
- (_Bool)canFormWordStartingWithExpression:(id)arg1;
- (_Bool)_isPrime;

@end
