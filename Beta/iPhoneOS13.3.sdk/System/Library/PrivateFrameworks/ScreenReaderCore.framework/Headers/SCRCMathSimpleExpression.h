/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathSimpleExpression : SCRCMathExpression

{
    NSString *_content;
}

@property (copy, nonatomic) NSString *content;

- (id)description;
- (long long)integerValue;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isInteger;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (id)latexMathModeDescription;
- (_Bool)canBeUsedWithBase;
- (_Bool)isFunctionName;
- (_Bool)isWordOrAbbreviation;
- (id)_functionNames;

@end
