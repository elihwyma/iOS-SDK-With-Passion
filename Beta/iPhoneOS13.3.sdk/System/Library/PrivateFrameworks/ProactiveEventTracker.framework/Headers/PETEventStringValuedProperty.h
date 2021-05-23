/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

#import <ProactiveEventTracker/PETEventProperty.h>

@class NSSet;

@interface PETEventStringValuedProperty : PETEventProperty

{
    NSSet *_possibleValues;
    _Bool _autoSanitizeValues;
}

- (id)description;
- (_Bool)isValidValue:(id)arg1;
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (unsigned long long)cardinality;
- (id)longestValueString;
- (id)initWithName:(id)arg1 possibleValues:(id)arg2 autoSanitizeValues:(_Bool)arg3;

@end
