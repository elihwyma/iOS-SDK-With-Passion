/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/Swift-Protocol.h>

@protocol NFSeshatSessionInterface <Swift>

- (unsigned short)getData: /* Error: Ran out of types for this method. */;
- (unsigned short)allocateSlot:authorizingUser:authorizingUserToken:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)derive:userHash:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)resetCounter:userToken:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)authorizeUpdate:slotIndex:userToken:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteSlot:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)getHash: /* Error: Ran out of types for this method. */;
- (unsigned short)upgradeKey:inputData:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)obliterate: /* Error: Ran out of types for this method. */;

@end
