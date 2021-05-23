/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSStringPredicateOperator.h>

__attribute__((visibility("hidden")))
@interface NSMatchingPredicateOperator : NSStringPredicateOperator

{
    int _contextLock;
    CDStruct_4829dca9 *_regexContext;
}

- (void)dealloc;
- (SEL)selector;
- (id)symbol;
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;
- (_Bool)_shouldEscapeForLike;
- (void)_clearContext;

@end
