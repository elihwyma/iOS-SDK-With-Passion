/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@protocol IDSGroupContextDataSourceDaemonProtocol

- (unsigned short)upsertGroupWithInfo:previousGroup:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchGroupWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)publicDataRepresentationForGroup:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)groupFromPublicDataRepresentation:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)participantsForCypher:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)validateCachedGroup:isParentOfGroup:completion: /* Error: Ran out of types for this method. */;

@end
