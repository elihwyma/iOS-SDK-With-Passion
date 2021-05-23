/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/Swift-Protocol.h>

@protocol GKAccountServicePrivate <Swift>

- (unsigned short)setupAccountForParameters:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)isICloudAvailableWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticatePlayerWithUsername:password:rawPassword:altDSID:usingFastPath:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticatePlayerWithUsername:password:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)validateAccountWithUsername:password:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountCreated:playerID:authenticationToken:alias:altDSID:finished:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)setLoginStatus:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountCreated:playerID:authenticationToken:alias:finished:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAccountAuthTokenWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)authenticationCancelled;
- (unsigned short)accountEdited:alias:firstName:lastName:handler: /* Error: Ran out of types for this method. */;

@end
