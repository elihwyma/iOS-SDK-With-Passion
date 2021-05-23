/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSLayoutConstraint.h>

@class NSISVariable;

__attribute__((visibility("hidden")))
@interface NSErrorVariableConstraint : NSLayoutConstraint

{
    NSISVariable *_errorVariable;
    double _errorValue;
}

- (void)dealloc;
- (id)initWithVariable:(id)arg1 value:(double)arg2;
- (id)constrainedConstraint;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (_Bool)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(_Bool *)arg2;

@end
