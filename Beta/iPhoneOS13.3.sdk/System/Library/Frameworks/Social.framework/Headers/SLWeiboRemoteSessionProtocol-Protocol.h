/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <Social/Swift-Protocol.h>

@protocol SLWeiboRemoteSessionProtocol <Swift>

- (unsigned short)setActiveAccountIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)checkIn: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchSessionInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)ensureUserRecordStore;
- (unsigned short)fetchProfileImageDataForScreenName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)recordsMatchingPrefixString:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCurrentUrlLimits: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCurrentImageLimits: /* Error: Ran out of types for this method. */;
- (unsigned short)setGeotagStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchGeotagStatus: /* Error: Ran out of types for this method. */;
- (unsigned short)setGeotagAccountSetting:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)sendStatus:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)showWeiboSettingsIfNeeded: /* Error: Ran out of types for this method. */;
- (unsigned short)getPermaLinkFromLastStatusUpdate: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchRecordForScreenName:completion: /* Error: Ran out of types for this method. */;

@end
