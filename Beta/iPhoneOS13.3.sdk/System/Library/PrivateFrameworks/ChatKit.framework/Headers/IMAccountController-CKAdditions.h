/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMAccountController.h>

@interface IMAccountController (CKAdditions)

- (id)__ck_defaultAccountForService:(id)arg1;
- (id)__ck_bestAccountForAddresses:(id)arg1;
- (id)__ck_bestAccountForAddress:(id)arg1;
- (id)__ck_bestAccountForAddresses:(id)arg1 withFallbackService:(id)arg2;

@end
