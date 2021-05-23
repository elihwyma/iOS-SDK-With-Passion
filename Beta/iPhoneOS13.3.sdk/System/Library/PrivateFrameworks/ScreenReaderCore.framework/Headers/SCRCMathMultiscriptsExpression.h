/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SCRCMathMultiscriptsExpression : SCRCMathExpression

{
    SCRCMathExpression *_base;
    NSArray *_postScripts;
    NSArray *_preScripts;
}

@property (retain, nonatomic) SCRCMathExpression *base;
@property (retain, nonatomic) NSArray *preScripts;
@property (retain, nonatomic) NSArray *postScripts;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)_subSuperscriptPairFromDictionary:(id)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (void)_subSuperScriptsDescriptionFromArray:(id)arg1 withSpeakingStyle:(long long)arg2 arePausesAllowed:(_Bool)arg3 outSubscripts:(id *)arg4 outSuperscripts:(id *)arg5;
- (id)_appendString:(id)arg1 toDescription:(id)arg2 arePausesAllowed:(_Bool)arg3;

@end
