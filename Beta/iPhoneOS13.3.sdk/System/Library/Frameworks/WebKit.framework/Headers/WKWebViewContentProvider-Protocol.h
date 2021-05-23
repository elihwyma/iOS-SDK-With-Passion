/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/Swift-Protocol.h>

@class NSData, NSString, UIView;

@protocol WKWebViewContentProvider <Swift>

@property (nonatomic, readonly) UIView *web_contentView;
@property (nonatomic, readonly) NSData *web_dataRepresentation;
@property (nonatomic, readonly) NSString *web_suggestedFilename;
@property (nonatomic, readonly) _Bool web_isBackground;

+ (unsigned short)web_requiresCustomSnapshotting;

- (unsigned short)web_initWithFrame:webView:mimeType: /* Error: Ran out of types for this method. */;
- (unsigned short)web_setMinimumSize: /* Error: Ran out of types for this method. */;
- (unsigned short)web_setFixedOverlayView: /* Error: Ran out of types for this method. */;
- (unsigned short)web_setContentProviderData:suggestedFilename: /* Error: Ran out of types for this method. */;
- (unsigned short)web_computedContentInsetDidChange;
- (unsigned short)web_didSameDocumentNavigation: /* Error: Ran out of types for this method. */;
- (unsigned short)web_countStringMatches:options:maxCount: /* Error: Ran out of types for this method. */;
- (unsigned short)web_findString:options:maxCount: /* Error: Ran out of types for this method. */;
- (unsigned short)web_hideFindUI;
- (unsigned short)web_setOverlaidAccessoryViewsInset: /* Error: Ran out of types for this method. */;

@end
