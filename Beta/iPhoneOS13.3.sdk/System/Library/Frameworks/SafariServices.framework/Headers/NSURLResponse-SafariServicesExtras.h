/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <CFNetwork/NSURLResponse.h>

@interface NSURLResponse (SafariServicesExtras)

@property (nonatomic, readonly) _Bool _sf_allowedToOverrideContentDispositionAttachment;
@property (nonatomic, readonly) _Bool _sf_hasAttachmentWithFilename;

- (_Bool)sf_shouldDownloadDueToContentDisposition:(_Bool)arg1;
- (_Bool)sf_hasXMLAttachment;

@end
