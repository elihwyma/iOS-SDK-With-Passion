/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

__attribute__((visibility("hidden")))
@interface FPURLOperationLocator

{
    _Bool _attachSandboxExtensionOnXPCEncoding;
    long long _size;
}

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)initWithObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (unsigned long long)size;
- (id)filename;
- (_Bool)isDownloaded;
- (_Bool)isFolder;
- (id)parentIdentifier;
- (_Bool)isExternalURL;
- (void)attachSandboxExtensionOnXPCEncoding;
- (_Bool)requiresCrossDeviceCopy;

@end
