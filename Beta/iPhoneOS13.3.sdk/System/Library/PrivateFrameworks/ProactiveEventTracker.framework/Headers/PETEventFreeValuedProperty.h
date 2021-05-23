/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

#import <ProactiveEventTracker/PETEventProperty.h>

@interface PETEventFreeValuedProperty : PETEventProperty

- (id)description;
- (id)initWithName:(id)arg1;
- (_Bool)isValidValue:(id)arg1;
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (unsigned long long)cardinality;
- (id)longestValueString;

@end
