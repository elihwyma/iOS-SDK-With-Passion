/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

__attribute__((visibility("hidden")))
@interface FPItemOperationLocator

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)identifier;
- (unsigned long long)size;
- (id)filename;
- (_Bool)isDownloaded;
- (_Bool)isFolder;
- (id)parentIdentifier;
- (_Bool)isProviderItem;
- (_Bool)requiresCrossDeviceCopy;
- (_Bool)isMaterializedOnDisk;

@end
