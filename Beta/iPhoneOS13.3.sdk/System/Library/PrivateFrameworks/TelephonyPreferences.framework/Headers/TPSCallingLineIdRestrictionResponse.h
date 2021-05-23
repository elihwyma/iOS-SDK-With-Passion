/*
 Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

#import <TelephonyPreferences/TPSResponse.h>

@interface TPSCallingLineIdRestrictionResponse : TPSResponse

{
    _Bool _editable;
    long long _state;
}

@property (nonatomic, readonly, getter=isEditable) _Bool editable;
@property (nonatomic, readonly) long long state;

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
- (id)initWithsubscriptionContext:(id)arg1 editable:(_Bool)arg2 state:(long long)arg3 error:(id)arg4;

@end
