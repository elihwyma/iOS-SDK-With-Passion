/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebKit/WKBackForwardListItem.h>

@class _SFQuickLookDocument, _SFSecurityInfo;

@interface WKBackForwardListItem (SafariServicesExtras)

@property (retain, nonatomic, setter=_sf_setQuickLookDocument:) _SFQuickLookDocument *_sf_quickLookDocument;
@property (retain, nonatomic, setter=_sf_setSecurityInfo:) _SFSecurityInfo *_sf_securityInfo;

@end
