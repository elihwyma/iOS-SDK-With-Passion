/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSResponse.h>

@interface TPSCallWaitingResponse : TPSResponse

{
    _Bool _enabled;
}

@property (nonatomic, readonly) _Bool enabled;

+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)archivedDataWithError:(id *)arg1;
- (_Bool)isEqualToResponse:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2;
- (id)initWithsubscriptionContext:(id)arg1 error:(id)arg2 enabled:(_Bool)arg3;

@end
