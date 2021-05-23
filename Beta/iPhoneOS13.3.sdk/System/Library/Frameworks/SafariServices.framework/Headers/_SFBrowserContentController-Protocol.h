/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/Swift-Protocol.h>

@class _SFPageZoomPreferenceManager, _SFPerSitePreferencesVendor;

@protocol _SFBrowserDocument;

@protocol _SFBrowserContentController <Swift>

@property (nonatomic, readonly) id <_SFBrowserDocument> activeDocument;
@property (nonatomic, readonly, getter=isShowingReader) _Bool showingReader;
@property (nonatomic) _Bool keepBarsMinimized;
@property (nonatomic, readonly) _SFPerSitePreferencesVendor *perSitePreferencesVendor;
@property (nonatomic, readonly) _SFPageZoomPreferenceManager *pageZoomManager;

- (unsigned short)toggleShowingReaderForUserAction;

@end
