/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <Foundation/NSObject.h>

@interface CLSUserDefaults : NSObject

+ (id)dictionaryRepresentation;
+ (_Bool)_boolValueForKey:(id)arg1 defaultValue:(_Bool)arg2;
+ (_Bool)persistProgressData;
+ (_Bool)disableASMRosters;
+ (_Bool)automatchClientPersona;
+ (_Bool)verboseOperationsLogging;
+ (_Bool)enableFileBasedResponses;
+ (int)_intValueForKey:(id)arg1 defaultValue:(int)arg2;
+ (float)_floatValueForKey:(id)arg1 defaultValue:(float)arg2;
+ (double)_doubleValueForKey:(id)arg1 defaultValue:(double)arg2;
+ (_Bool)isInternalOSVariant;

@end
