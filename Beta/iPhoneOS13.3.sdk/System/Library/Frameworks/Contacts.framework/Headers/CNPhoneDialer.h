/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNPhoneDialer : NSObject

+ (id)URLWithPhoneNumber:(id)arg1;
+ (id)sanitizePhoneNumber:(id)arg1;
+ (id)dialMessageWithDataValue:(id)arg1 displayName:(id)arg2;
+ (_Bool)sendMessage:(id)arg1 error:(id *)arg2;
+ (id)messageWithAdditionalParameters:(id)arg1;
+ (id)cancelMessageWithDialMessageID:(id)arg1;
+ (void)loadIdentityServices;
+ (id)dialNumber:(id)arg1 displayName:(id)arg2 error:(id *)arg3;
+ (id)sendDialMessage:(id)arg1 displayName:(id)arg2 error:(id *)arg3;
+ (_Bool)cancelDialMessage:(id)arg1 error:(id *)arg2;

@end
