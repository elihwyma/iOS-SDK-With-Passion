/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/Swift-Protocol.h>

@protocol NFContactlessPaymentSessionInterface <Swift>

- (unsigned short)stopCardEmulation: /* Error: Ran out of types for this method. */;
- (unsigned short)getApplets: /* Error: Ran out of types for this method. */;
- (unsigned short)getFelicaAppletState:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)getTransitAppletState:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)setActivePaymentApplet:keys:authorization:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)startCardEmulationWithAuthorization:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)startDeferredCardEmulationWithAuthorization:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)startHostCardEmulation: /* Error: Ran out of types for this method. */;
- (unsigned short)enablePlasticCardMode:callback: /* Error: Ran out of types for this method. */;
- (unsigned short)startExpressMode: /* Error: Ran out of types for this method. */;

@end
