/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@interface PMLAppleDirectory : NSObject

+ (id)sharedInstance;

- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;
- (_Bool)isEmailInAppleDirectory:(id)arg1 withPhonenumber:(id)arg2;
- (_Bool)isEmailInAppleDirectory:(id)arg1 withAnotherEmail:(id)arg2;
- (_Bool)isEmailInAppleDirectory:(id)arg1;
- (_Bool)isPhoneNumberInAppleDirectory:(id)arg1;
- (_Bool)isPhoneNumberInAppleDirectory:(id)arg1 withAnotherPhone:(id)arg2;

@end
