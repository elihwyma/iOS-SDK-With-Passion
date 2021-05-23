/*
 Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PETEventProperty : NSObject

{
    NSString *_name;
}

@property (nonatomic, readonly) unsigned long long cardinality;
@property (nonatomic, readonly) NSString *longestValueString;
@property (nonatomic, readonly) NSString *name;

+ (id)propertyWithName:(id)arg1 possibleValues:(id)arg2;
+ (id)propertyWithName:(id)arg1 range:(struct _NSRange)arg2;
+ (id)propertyWithName:(id)arg1 enumMapping:(id)arg2;
+ (id)propertyWithName:(id)arg1 possibleValues:(id)arg2 autoSanitizeValues:(_Bool)arg3;
+ (id)propertyWithName:(id)arg1 enumMapping:(id)arg2 autoSanitizeValues:(_Bool)arg3;
+ (id)propertyWithName:(id)arg1 range:(struct _NSRange)arg2 clampValues:(_Bool)arg3;
+ (id)propertyWithName:(id)arg1 rangeMin:(unsigned long long)arg2 rangeMax:(unsigned long long)arg3;
+ (id)freeValuedPropertyWithName:(id)arg1;

- (id)initWithName:(id)arg1;
- (_Bool)isValidValue:(id)arg1;
- (id)possibleValues;
- (id)_loggingKeyStringRepresentationForValue:(id)arg1;
- (struct _NSRange)validRange;

@end
