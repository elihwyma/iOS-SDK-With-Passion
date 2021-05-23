/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSError.h>

@interface NSError (PHAErrorExtensions)

+ (id)phaErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)phaErrorWithCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)phaObjectNotFoundErrorWithLocalizedDescription:(id)arg1;
+ (id)phaUnexpectedConditionErrorWithUserInfo:(id)arg1;
+ (id)phaNotImplementedErrorForSelector:(SEL)arg1;
+ (id)phaErrorForNilParameterNamed:(id)arg1;
+ (id)phaErrorForInvalidParameterValue:(id)arg1 named:(id)arg2;
+ (id)phaErrorForInvalidParameterNamed:(id)arg1 localizedDescription:(id)arg2;
+ (id)phaObjectNotFoundErrorForAssetLocalIdentifier:(id)arg1;
+ (id)phaResourceNotFoundErrorWithLocalizedDescription:(id)arg1;
+ (id)phaUnexpectedConditionErrorWithLocalizedDescription:(id)arg1;

@end
