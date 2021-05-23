/*
 Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@protocol RPDaemonXPCServerInterface

- (unsigned short)getIdentitiesWithFlags:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)activateAssertionWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)diagnosticLogControl:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)primaryAccountSignedInWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)primaryAccountSignedOutWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addOrUpdateIdentity:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)diagnosticCommand:params:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)diagnosticShow:level:completion: /* Error: Ran out of types for this method. */;

@end
