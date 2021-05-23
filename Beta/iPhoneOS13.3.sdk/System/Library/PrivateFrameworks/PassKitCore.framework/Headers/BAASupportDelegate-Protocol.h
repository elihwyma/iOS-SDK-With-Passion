/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/Swift-Protocol.h>

@protocol BAASupportDelegate <Swift>

+ (unsigned short)isInternal;
+ (unsigned short)generateSigKey:keyData:attestation:pubKey: /* Error: Ran out of types for this method. */;
+ (unsigned short)setSigKey:expirationDate:keyData:certificates: /* Error: Ran out of types for this method. */;
+ (unsigned short)getSigKeyExpDate:expirationDate: /* Error: Ran out of types for this method. */;
+ (unsigned short)getSigKeyCertificates:certificates: /* Error: Ran out of types for this method. */;
+ (unsigned short)confirmSigKey:status: /* Error: Ran out of types for this method. */;
+ (unsigned short)getBlessedUser:keybagUUID: /* Error: Ran out of types for this method. */;

@end
