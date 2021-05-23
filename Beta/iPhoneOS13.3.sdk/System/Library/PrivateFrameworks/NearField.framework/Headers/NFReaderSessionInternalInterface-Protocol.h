/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/Swift-Protocol.h>

@protocol NFReaderSessionInternalInterface <Swift>

- (unsigned short)startPollingForTechnology:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)skipMifareClassification: /* Error: Ran out of types for this method. */;
- (unsigned short)formatNdefWithKey:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)felicaStateForSystemCode:withRequestService:withBlockReadList:performSearchServiceCode:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)execRemoteAdminScript:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)felicaRequestService:callback: /* Error: Ran out of types for this method. */;

@end
