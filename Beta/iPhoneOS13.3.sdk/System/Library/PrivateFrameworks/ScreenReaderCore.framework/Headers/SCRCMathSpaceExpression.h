/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <ScreenReaderCore/SCRCMathExpression.h>

__attribute__((visibility("hidden")))
@interface SCRCMathSpaceExpression : SCRCMathExpression

- (id)initWithDictionary:(id)arg1;
- (id)mathMLString;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;
- (_Bool)beginsWithSpace;
- (_Bool)endsWithSpace;

@end
