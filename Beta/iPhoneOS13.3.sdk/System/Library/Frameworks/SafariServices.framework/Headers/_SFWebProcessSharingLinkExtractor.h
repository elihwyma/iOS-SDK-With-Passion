/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;

@interface _SFWebProcessSharingLinkExtractor : NSObject

{
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_sharingLinkExtractorInterface;
}

- (id)initWithPageController:(id)arg1;
- (void)fetchSharingLinkWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setUpRemoteInterface;
- (id)_injectedLinkExtractorSourceString;
- (id)_extractSharingLink;
- (id)_extractCanonicalLinkWithInjectedObject:(id)arg1;
- (id)_extractDominantIFrameWithInjectedObject:(id)arg1;
- (void)_withInjectedLinkExtractorObjectInFrame:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
