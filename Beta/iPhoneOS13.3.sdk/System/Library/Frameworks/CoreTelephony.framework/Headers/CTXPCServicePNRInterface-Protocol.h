/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@protocol CTXPCServicePNRInterface

- (unsigned short)isPNRSupported:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)issuePNRRequest:pnrReqType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPNRContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)isPhoneNumberCredentialValid:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)context:getPhoneNumberSignatureWithCompletion: /* Error: Ran out of types for this method. */;

@end
