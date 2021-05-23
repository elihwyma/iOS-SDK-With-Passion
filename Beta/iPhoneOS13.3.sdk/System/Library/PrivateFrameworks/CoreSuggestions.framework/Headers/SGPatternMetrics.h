/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class SGMSelfIdPatternMatched;

@interface SGPatternMetrics : NSObject

{
    SGMSelfIdPatternMatched *_selfIdPatternMatched;
}

@property (retain, nonatomic) SGMSelfIdPatternMatched *selfIdPatternMatched;

+ (id)instance;
+ (void)recordSelfIdMatchWithPatternType:(struct SGMSIPatternType_)arg1 patternHash:(id)arg2 nameTokenCount:(unsigned long long)arg3 nameClassification:(struct SGMSINameClassification_)arg4 messageIndex:(unsigned long long)arg5;

- (id)init;

@end
