/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSError.h>

@interface NSError (CRKAdditions)

+ (id)crk_errorForSecurityOSStatus:(int)arg1;
+ (id)crk_badFieldTypeErrorWithField:(id)arg1;
+ (id)crk_valueNotUniqueErrorWithField:(id)arg1 value:(id)arg2;
+ (id)crk_malformedProfileErrorWithField:(id)arg1 value:(id)arg2;
+ (id)crk_missingFieldErrorWithField:(id)arg1;
+ (id)crk_unsupportedValueErrorWithField:(id)arg1 value:(id)arg2;
+ (id)crk_EDUProfileErrorWithCode:(long long)arg1 errorDictionary:(id)arg2;
+ (id)crk_EDUProfileErrorWithCode:(long long)arg1 errorField:(id)arg2 andValue:(id)arg3;

@end
