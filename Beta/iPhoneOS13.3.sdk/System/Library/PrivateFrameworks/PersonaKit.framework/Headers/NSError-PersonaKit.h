/*
 Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
 */

#import <Foundation/NSError.h>

@interface NSError (PersonaKit)

+ (id)pr_errorWithCode:(long long)arg1;

- (_Bool)pr_isNetworkAvailabilityError;
- (_Bool)pr_isInPersonaDomain;

@end
