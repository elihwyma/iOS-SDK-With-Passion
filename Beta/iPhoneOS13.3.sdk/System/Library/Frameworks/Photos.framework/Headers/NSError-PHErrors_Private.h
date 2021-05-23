/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSError.h>

@interface NSError (PHErrors_Private)

+ (id)ph_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (id)_ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;
+ (id)ph_genericErrorWithLocalizedDescription:(id)arg1;
+ (id)ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;
+ (id)ph_genericEntitlementError;

@end
