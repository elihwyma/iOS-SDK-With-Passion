/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@protocol BBObserverServerInterface

- (unsigned short)setObserverFeed:asLightsAndSirensGateway:priority: /* Error: Ran out of types for this method. */;
- (unsigned short)setObserverFeed:attachToLightsAndSirensGateway: /* Error: Ran out of types for this method. */;
- (unsigned short)getSectionInfoWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getSectionInfoForActiveSectionsWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getSectionInfoForSectionIDs:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)requestNoticesBulletinsForSectionID: /* Error: Ran out of types for this method. */;
- (unsigned short)requestNoticesBulletinsForAllSections;
- (unsigned short)getUniversalSectionIDForSectionID:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getBulletinsWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPublisherMatchIDsOfBulletinsPublishedAfterDate:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getBulletinsForPublisherMatchIDs:sectionID:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)handleResponse:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSection: /* Error: Ran out of types for this method. */;
- (unsigned short)clearBulletinsFromDate:toDate:inSections: /* Error: Ran out of types for this method. */;
- (unsigned short)clearBulletinIDs:inSection: /* Error: Ran out of types for this method. */;
- (unsigned short)removeBulletins:inSection:fromFeeds: /* Error: Ran out of types for this method. */;
- (unsigned short)getSectionParametersForSectionID:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getDataForAttachmentUUID:bulletinID:isPrimary:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getPNGDataForAttachmentUUID:bulletinID:isPrimary:sizeConstraints:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAspectRatioForAttachmentUUID:bulletinID:isPrimary:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)finishedWithBulletinID:transactionID: /* Error: Ran out of types for this method. */;

@end
