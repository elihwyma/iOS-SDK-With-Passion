/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@protocol ADSSession_RPC

- (unsigned short)_remote_captureAnalytics:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_reportPreRollDidStartForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_reportPreRollDidStopForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_userDidSkipPrerollForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_sendAdspaceStatusEventForAdSpaceWithIdentifier:withAdSpaceInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)_priv_adSpaceDidAppearForAdSpaceIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_priv_adSpaceDidDisappearForAdSpaceIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_setClientLinkedOnVersion: /* Error: Ran out of types for this method. */;
- (unsigned short)_reportSubscriptionEventWithType:withQToken:sourceIdentifier:eventTime:info: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_reportPrerollRequest;
- (unsigned short)_remote_addClientToSegments:replaceExisting:privateSegment: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_requestAdSpaceWithConfiguration:deviceInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_reportTotalCreativeRequestCount:forAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_closeAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_setSection:forAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_setAuthenticationUserName:forAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_setVisibility:forAdSpaceWithIdentifier:withAdSpaceInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_setAdSpaceType:forAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_setSelectedAdFrame:withContentFrame:atScale:forAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_bannerCancelActionForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_bannerRefuseActionForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_reportNativeClickEventForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_priv_setServerURL:forAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_determineActionForAdSpaceWithIdentifier:ForTapAtLocation:inFrame:withMRAIDAction:completeHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_bannerBeginActionForAdSpaceWithIdentifier:fromFrame:tapLocation:reportAnyway: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_reportSystemEvent:forAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_actionCompletedWithSystemEvent:forAdSpaceWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_reportContentImpressionForAdSpaceWithIdenfier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_creativeControllerTapGestureTimerDidExpireBeforePrimaryActionWasInvokedForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_creativeControllerNavigationAttemptBlockedDueToAccidentalTapForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_reportPrivacyAdTransparencyDidAppearForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_reportPrivacyAdTransparencyDidDisappearForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_reportPrivacyAdTransparencyDidRenderTransparencyForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_reportPrivacyAdTransparencyDidLinkOutForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_reportPrivacyAdMarkWasTappedForAdSpaceWithIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_segmentDataForSignedInUser: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_signatureForRequestData:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)_remote_enablePolicyEngine;
- (unsigned short)_remote_disablePolicyEngine;
- (unsigned short)_remote_reportErrorEvent:forAdSpaceWithIdentifier:errorDetails:badURLs: /* Error: Ran out of types for this method. */;

@end
