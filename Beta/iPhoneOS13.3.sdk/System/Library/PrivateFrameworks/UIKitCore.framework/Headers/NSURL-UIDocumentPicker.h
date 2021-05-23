/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSURL.h>

@class NSArray, NSString;

@interface NSURL (UIDocumentPicker)

@property (copy, nonatomic, setter=_setTitle:) NSString *_title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)ui_incomingDirectory:(_Bool)arg1;
+ (id)ui_cloudDocsContainerURL;
+ (id)ui_URLFromExportBookmark:(id)arg1;
+ (id)mapsURLWithQuery:(id)arg1;
+ (id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2;
+ (id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3;

- (id)_NSItemProviderArchive_customArchiveDictionary;
- (void)_NSItemProviderArchive_didUnarchiveCustomDictionary:(id)arg1;
- (id)ui_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;
- (_Bool)ui_hasSandboxExtendedForClass:(const char *)arg1;
- (_Bool)ui_isFileProviderURL;
- (id)ui_issueReadSandboxExtensionWithError:(id *)arg1;
- (id)ui_issueReadWriteSandboxExtensionWithError:(id *)arg1;
- (_Bool)ui_hasReadSandboxExtended;
- (void)ui_setIsFileProviderURL:(_Bool)arg1;
- (_Bool)ui_canOpenInPlace;
- (_Bool)ui_isUnfulfilledPromiseURL;
- (void)ui_setIsContentManaged:(_Bool)arg1;
- (_Bool)ui_isContentManaged;
- (id)ui_bookmarkForExportWithError:(id *)arg1;
- (void)ui_scheduleForCleanup;
- (id)ui_resolveOnDiskBookmarkAndPromise;
- (id)ui_downloadOperationForActivity:(id)arg1;
- (id)ui_downloadOperationForActivity:(id)arg1 inScene:(id)arg2;
- (id)ui_URLByResolvingSymlinksAndCopyingSecurityScope;
- (void)_domain:(id *)arg1 subdomain:(id *)arg2;
- (id)phobosURL;
- (id)radarWebURL;
- (id)searchResultDomain;
- (id)searchResultIdentifier;
- (_Bool)isSpringboardHandledURL;
- (_Bool)isWebcalURL;
- (_Bool)isAccountURL;
- (_Bool)isJavaScriptURL;
- (_Bool)isHTTPOrHTTPSURL;
- (_Bool)isInternalUIKitURL;

@end
