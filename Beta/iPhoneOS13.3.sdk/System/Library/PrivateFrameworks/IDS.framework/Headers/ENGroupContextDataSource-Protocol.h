/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <IDS/Swift-Protocol.h>

@protocol ENGroupContextDataSource <Swift>

- (unsigned short)participantsForCypher:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)validateCachedGroup:isParentOfGroup:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)groupContext:upsertGroupWithInfo:previousGroup:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)groupContext:fetchGroupWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)publicDataRepresentationForGroup:inContext:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)groupFromPublicDataRepresentation:inContext:completion: /* Error: Ran out of types for this method. */;

@end
