/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/Swift-Protocol.h>

@protocol MCProfileConnectionXPCProtocol <Swift>

- (unsigned short)doMCICDidUpdateStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)doMCICDidBeginInstallingNextProfileData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)doMCICDidFinishInstallationWithIdentifier:error:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)doMCICDidRequestUserInput:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)doMCICDidRequestMAIDSignIn:personaID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)doMCICDidFinishPreflightWithError:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)doMCICDidRequestShowUserWarnings:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)doMCICDidRequestCurrentPasscodeWithCompletion: /* Error: Ran out of types for this method. */;

@end
