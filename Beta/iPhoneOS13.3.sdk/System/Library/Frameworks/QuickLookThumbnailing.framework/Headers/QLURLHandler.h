/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface QLURLHandler : NSObject

{
    const char *_sandboxType;
    _Bool _isAccessingSecurityScope;
    _Bool _needsAccessToExternalResources;
    NSString *_fileExtensionToken;
    long long _fileExtensionHandle;
    NSString *_physicalFileExtensionToken;
    long long _physicalFileExtensionHandle;
    NSString *_externalResourcesToken;
    long long _externalResourcesHandle;
    NSURL *_fileURL;
}

@property (retain, nonatomic) NSString *fileExtensionToken;
@property (nonatomic) long long fileExtensionHandle;
@property (retain, nonatomic) NSString *physicalFileExtensionToken;
@property (nonatomic) long long physicalFileExtensionHandle;
@property (copy, nonatomic) NSString *externalResourcesToken;
@property (nonatomic) long long externalResourcesHandle;
@property (retain) NSURL *fileURL;
@property (nonatomic) _Bool needsAccessToExternalResources;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 sandboxType:(const char *)arg2;
- (void)sandboxExtensionRelease:(long long)arg1;
- (id)_issueFileExtensionForURL:(id)arg1;
- (void)_issueExternalResourcesExtensionForURL:(id)arg1;
- (long long)sandboxExtensionConsume:(const char *)arg1;
- (char *)sandboxExtensionIssueFileWithClass:(const char *)arg1 path:(const char *)arg2 flags:(unsigned int)arg3;
- (void)_issueFileExtension;
- (void)_consumeFileExtension;

@end
