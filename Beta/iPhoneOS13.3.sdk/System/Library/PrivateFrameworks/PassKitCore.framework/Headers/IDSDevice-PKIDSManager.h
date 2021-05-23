/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <IDSDevice.h>

@interface IDSDevice (PKIDSManager)

- (id)pk_idsDestination;
- (_Bool)pk_isValidHandoffDevice;
- (_Bool)pk_isApplePayCapable;

@end
