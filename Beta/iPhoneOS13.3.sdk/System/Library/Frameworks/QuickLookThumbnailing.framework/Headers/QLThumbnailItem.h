/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class FPSandboxingURLWrapper, NSData, NSString, NSURL;

@interface QLThumbnailItem : NSObject

{
    NSString *_fileExtensionToken;
    long long _fileExtensionHandle;
    NSURL *_url;
    FPSandboxingURLWrapper *_urlWrapperForExtension;
    NSData *_data;
    NSString *_overriddenContentType;
    NSString *_computedContentType;
    unsigned long long _downloadStatus;
    _Bool _needsAccessToExternalResources;
}

@property (readonly) NSURL *url;
@property (readonly) FPSandboxingURLWrapper *urlWrapperForExtension;
@property (readonly) NSData *data;
@property (copy, nonatomic) NSString *overriddenContentType;
@property unsigned long long downloadStatus;
@property (copy) NSString *computedContentType;
@property _Bool needsAccessToExternalResources;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (_Bool)needsDownload;
- (id)initWithURL:(id)arg1 URLWrapperForExtension:(id)arg2;
- (void)issueFileExtension;
- (void)consumeFileExtension;

@end
