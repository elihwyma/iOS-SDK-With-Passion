/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@protocol RWIProtocolPageDomainHandler <Swift>

- (unsigned short)enableWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)disableWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadWithErrorCallback:successCallback:ignoreCache:revalidateAllResources: /* Error: Ran out of types for this method. */;
- (unsigned short)navigateWithErrorCallback:successCallback:url: /* Error: Ran out of types for this method. */;
- (unsigned short)overrideUserAgentWithErrorCallback:successCallback:value: /* Error: Ran out of types for this method. */;
- (unsigned short)overrideSettingWithErrorCallback:successCallback:setting:value: /* Error: Ran out of types for this method. */;
- (unsigned short)getCookiesWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteCookieWithErrorCallback:successCallback:cookieName:url: /* Error: Ran out of types for this method. */;
- (unsigned short)getResourceTreeWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)getResourceContentWithErrorCallback:successCallback:frameId:url: /* Error: Ran out of types for this method. */;
- (unsigned short)searchInResourceWithErrorCallback:successCallback:frameId:url:query:caseSensitive:isRegex:requestId: /* Error: Ran out of types for this method. */;
- (unsigned short)searchInResourcesWithErrorCallback:successCallback:text:caseSensitive:isRegex: /* Error: Ran out of types for this method. */;
- (unsigned short)setShowRulersWithErrorCallback:successCallback:result: /* Error: Ran out of types for this method. */;
- (unsigned short)setShowPaintRectsWithErrorCallback:successCallback:result: /* Error: Ran out of types for this method. */;
- (unsigned short)setEmulatedMediaWithErrorCallback:successCallback:media: /* Error: Ran out of types for this method. */;
- (unsigned short)setForcedAppearanceWithErrorCallback:successCallback:appearance: /* Error: Ran out of types for this method. */;
- (unsigned short)getCompositingBordersVisibleWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)setCompositingBordersVisibleWithErrorCallback:successCallback:visible: /* Error: Ran out of types for this method. */;
- (unsigned short)snapshotNodeWithErrorCallback:successCallback:nodeId: /* Error: Ran out of types for this method. */;
- (unsigned short)snapshotRectWithErrorCallback:successCallback:x:y:width:height:coordinateSystem: /* Error: Ran out of types for this method. */;
- (unsigned short)archiveWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;

@end
