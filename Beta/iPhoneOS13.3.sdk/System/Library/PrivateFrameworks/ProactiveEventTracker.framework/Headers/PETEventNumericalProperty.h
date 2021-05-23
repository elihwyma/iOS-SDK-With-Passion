/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

#import <ProactiveEventTracker/PETEventProperty.h>

@interface PETEventNumericalProperty : PETEventProperty

{
    struct _NSRange _validRange;
    _Bool _clampValues;
}

- (id)description;
- (_Bool)isValidValue:(id)arg1;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (unsigned long long)cardinality;
- (id)longestValueString;
- (struct _NSRange)validRange;
- (id)initWithName:(id)arg1 range:(struct _NSRange)arg2 clampValues:(_Bool)arg3;
- (unsigned long long)_unsignedIntegerValueForNumericValue:(id)arg1;

@end
