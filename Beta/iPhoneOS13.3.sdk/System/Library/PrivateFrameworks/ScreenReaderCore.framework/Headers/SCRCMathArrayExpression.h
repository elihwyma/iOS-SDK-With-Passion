/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathArrayExpression : SCRCMathExpression

{
    NSArray *_children;
}

@property (nonatomic, readonly) NSString *mathMLTag;
@property (nonatomic, readonly) NSArray *mathMLAttributes;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)children;
- (id)mathMLString;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;
- (id)prefixForChildAtIndex:(unsigned long long)arg1;
- (id)suffixForChildAtIndex:(unsigned long long)arg1;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)childSpeakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long *)arg4;
- (id)localizablePrefixForChildAtIndex:(unsigned long long)arg1;
- (id)localizableSuffixForChildAtIndex:(unsigned long long)arg1;
- (id)subExpressions;
- (_Bool)hasSimpleArrayOfChildren;

@end
