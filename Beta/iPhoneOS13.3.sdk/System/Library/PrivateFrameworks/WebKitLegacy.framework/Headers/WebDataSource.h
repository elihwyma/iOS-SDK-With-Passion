/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSMutableURLRequest, NSString, NSURL, NSURLRequest, NSURLResponse, WebArchive, WebFrame, WebResource;

@protocol WebDocumentRepresentation;

@interface WebDataSource : NSObject

{
    void *_private;
}

@property (nonatomic, readonly) NSDictionary *_quickLookContent;
@property (copy, nonatomic, setter=_setQuickLookContent:) NSDictionary *_quickLookContent;
@property (nonatomic, setter=_setQuickLookPreviewLoaderClient:) struct PreviewLoaderClient *_quickLookPreviewLoaderClient;
@property (copy, nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) id <WebDocumentRepresentation> representation;
@property (nonatomic, readonly) WebFrame *webFrame;
@property (nonatomic, readonly) NSURLRequest *initialRequest;
@property (nonatomic, readonly) NSMutableURLRequest *request;
@property (nonatomic, readonly) NSURLResponse *response;
@property (copy, nonatomic, readonly) NSString *textEncodingName;
@property (nonatomic, readonly, getter=isLoading) _Bool loading;
@property (copy, nonatomic, readonly) NSString *pageTitle;
@property (nonatomic, readonly) NSURL *unreachableURL;
@property (nonatomic, readonly) WebArchive *webArchive;
@property (nonatomic, readonly) WebResource *mainResource;
@property (copy, nonatomic, readonly) NSArray *subresources;

+ (void)initialize;
+ (Class)_representationClassForMIMEType:(id)arg1 allowingPlugins:(_Bool)arg2;
+ (id)_repTypesAllowImageTypeOmission:(_Bool)arg1;

- (void)dealloc;
- (id)_URL;
- (id)subresourceForURL:(id)arg1;
- (id)_webView;
- (id)initWithRequest:(id)arg1;
- (id)_responseMIMEType;
- (void)_setRepresentation:(id)arg1;
- (id)_mainDocumentError;
- (void)_addSubframeArchives:(id)arg1;
- (void)_setDeferMainResourceDataLoad:(_Bool)arg1;
- (void)_setOverrideTextEncodingName:(id)arg1;
- (void)_setAllowToBeMemoryMapped;
- (void)setDataSourceDelegate:(id)arg1;
- (id)dataSourceDelegate;
- (id)_documentFragmentWithArchive:(id)arg1;
- (id)_documentFragmentWithImageResource:(id)arg1;
- (id)_imageElementWithImageResource:(id)arg1;
- (void)addSubresource:(id)arg1;
- (void)_finishedLoading;
- (void)_receivedData:(id)arg1;
- (void)_setMainDocumentError:(id)arg1;
- (void)_revertToProvisionalState;
- (void)_replaceSelectionWithArchive:(id)arg1 selectReplacement:(_Bool)arg2;
- (_Bool)_isDocumentHTML;
- (void)_makeRepresentation;
- (struct DocumentLoader *)_documentLoader;
- (id)_initWithDocumentLoader:(Ref_2c3922bd *)arg1;

@end
