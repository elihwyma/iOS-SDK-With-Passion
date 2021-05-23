/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMService.h>

@interface IMService (CKAdditions)

- (_Bool)__ck_isiMessage;
- (BOOL)__ck_displayColor;
- (BOOL)__ck_serviceType;
- (_Bool)__ck_isSMS;
- (long long)__ck_maxRecipientCountForHandle:(id)arg1 simID:(id)arg2;
- (id)__ck_displayName;

@end
