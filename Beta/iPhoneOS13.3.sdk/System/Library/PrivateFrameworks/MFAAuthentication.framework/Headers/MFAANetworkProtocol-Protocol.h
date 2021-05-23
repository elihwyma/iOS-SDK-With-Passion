/*
 Image: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication
 */

@protocol MFAANetworkProtocol

- (unsigned short)requestMetadataForToken:withUUID:requestedLocale:requestInfo:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestActivationForToken:withUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)confirmActivationForToken:withUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestMetadataForCertSerial:issuerSeq:ppid:requestedLocale:requestInfo:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)validateCertSerial:issuerSeq:ppid:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)getCachedStatusForCertSerial:issuerSeq:ppid:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)addPairingWithToken:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)removePairingWithToken:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)verifyPairingWithToken:withReply: /* Error: Ran out of types for this method. */;

@end
