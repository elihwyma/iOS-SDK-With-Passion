/*
 Image: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
 */

#import <Foundation/NSObject.h>

@interface _SWCPrefs : NSObject

@property (readonly) unsigned long long maximumRetryCount;
@property (readonly) double retryIntervalAfterFailure;
@property (readonly) double retryIntervalAfterSuccess;
@property (readonly) _Bool verifyExtendedValidation;
@property (readonly, getter=isAppleInternal) _Bool appleInternal;

+ (id)sharedPrefs;

- (id)_init;
- (double)retryIntervalAfterSuccess:(_Bool)arg1;
- (id)descriptionOfAllPrefs;
- (_Bool)_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2 minimumValue:(unsigned long long)arg3 maximumValue:(unsigned long long)arg4;
- (unsigned long long)_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2;
- (unsigned long long)_recheckFuzzForSuccess:(_Bool)arg1;
- (id)_stringForKey:(id)arg1 defaultValue:(id)arg2;
- (void)_setString:(id)arg1 forKey:(id)arg2;

@end
