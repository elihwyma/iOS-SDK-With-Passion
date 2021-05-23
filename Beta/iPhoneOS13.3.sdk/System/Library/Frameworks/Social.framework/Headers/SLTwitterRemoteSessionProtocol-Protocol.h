/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

@protocol SLTwitterRemoteSessionProtocol

- (unsigned short)setActiveAccountIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)checkIn: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchSessionInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)ensureUserRecordStore;
- (unsigned short)fetchProfileImageDataForScreenName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)recordsMatchingPrefixString:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCurrentImageLimits: /* Error: Ran out of types for this method. */;
- (unsigned short)setGeotagStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchGeotagStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)sendStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPermaLinkFromLastStatusUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchRecordForScreenName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCurrentTCoLength: /* Error: Ran out of types for this method. */;
- (unsigned short)retweetTweetWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendDirectMessage:toUser:withScreenName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)showTwitterSettingsIfNeeded: /* Error: Ran out of types for this method. */;

@end
