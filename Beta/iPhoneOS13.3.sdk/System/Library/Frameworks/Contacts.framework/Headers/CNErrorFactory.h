/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@interface CNErrorFactory : NSObject

+ (id)errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorObject:(id)arg1 doesNotImplementSelector:(SEL)arg2;
+ (id)validationErrorByAggregatingValidationErrors:(id)arg1;
+ (id)errorByPrependingKeyPath:(id)arg1 toKeyPathsInError:(id)arg2;
+ (id)genericiOSABError;
+ (long long)CNErrorCodeForABError:(struct __CFError *)arg1;
+ (id)errorForiOSABError:(struct __CFError *)arg1;
+ (id)errorWithCode:(long long)arg1;
+ (id)errorByAddingUserInfoEntries:(id)arg1 toError:(id)arg2;
+ (id)_localizedReasonForCode:(long long)arg1;
+ (id)_localizedDescriptionForCode:(long long)arg1;

@end
