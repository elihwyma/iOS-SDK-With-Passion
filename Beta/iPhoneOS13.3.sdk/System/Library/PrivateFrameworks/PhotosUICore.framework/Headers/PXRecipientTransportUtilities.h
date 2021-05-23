/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXRecipientTransportUtilities : NSObject

+ (_Bool)px_IsValidEmailAddress:(id)arg1;
+ (_Bool)px_IsEmailAddress:(id)arg1 equalToEmailAddress:(id)arg2;
+ (unsigned long long)px_mf_addressKindFromString:(id)arg1;
+ (id)px_validPhoneNumberFromString:(id)arg1;
+ (long long)px_addressKindFromString:(id)arg1;
+ (id)px_bestMessagingTransportForContact:(id)arg1;

@end
