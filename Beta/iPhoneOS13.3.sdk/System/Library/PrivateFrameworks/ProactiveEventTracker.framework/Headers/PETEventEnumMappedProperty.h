/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

#import <ProactiveEventTracker/PETEventProperty.h>

@class NSDictionary;

@interface PETEventEnumMappedProperty : PETEventProperty

{
    NSDictionary *_enumMap;
    _Bool _autoSanitizeValues;
}

- (id)description;
- (_Bool)isValidValue:(id)arg1;
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (unsigned long long)cardinality;
- (id)longestValueString;
- (struct _NSRange)validRange;
- (id)initWithName:(id)arg1 enumMapping:(id)arg2 autoSanitizeValues:(_Bool)arg3;

@end
