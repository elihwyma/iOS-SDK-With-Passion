/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/Swift-Protocol.h>

@protocol GKGameSessionService <Swift>

- (unsigned short)primaryPlayerInContainer:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)createSessionInContainer:withTitle:maxConnectedPlayers:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadSessionsInContainer:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadSessionWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeSessionWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)removePlayers:forSessionWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)loadDataForSessionWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveData:forSessionWithIdentifier:changeTag:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)setConnectionState:forSessionWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendData:reliably:forSessionWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchShareURLForSessionWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)setBadged:forPlayerIDs:forSessionWithIdentifier:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendMessageForSessionWithID:withLocalizedFormatKey:arguments:userMessage:data:recipientIDs:badgePlayers:handler: /* Error: Ran out of types for this method. */;

@end
