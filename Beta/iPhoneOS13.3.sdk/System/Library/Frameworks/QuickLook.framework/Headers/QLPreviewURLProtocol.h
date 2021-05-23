/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSURLProtocol.h>

__attribute__((visibility("hidden")))
@interface QLPreviewURLProtocol : NSURLProtocol

+ (void)initialize;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)registerPreview:(id)arg1;
+ (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(_Bool)arg3;
+ (id)_errorForAbort;
+ (void)_unregisterURL:(id)arg1;
+ (id)_errorForCancel;
+ (void)startLoadingProtocol:(id)arg1;
+ (void)stopLoadingProtocol:(id)arg1;
+ (id)newUniqueURLWithName:(id)arg1;
+ (id)newURLWithContentID:(id)arg1 baseURL:(id)arg2;
+ (void)registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
+ (id)_errorForNoPreview;
+ (void)unregisterURLs:(id)arg1 andPreview:(id)arg2;
+ (void)setError:(id)arg1 forURL:(id)arg2;
+ (id)errorForURL:(id)arg1;
+ (id)mimeTypeForAttachmentURL:(id)arg1;

- (void)stopLoading;
- (void)startLoading;

@end
