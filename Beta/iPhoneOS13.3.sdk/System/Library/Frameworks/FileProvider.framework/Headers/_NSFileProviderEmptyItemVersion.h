/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <FileProvider/NSFileProviderItemVersion.h>

__attribute__((visibility("hidden")))
@interface _NSFileProviderEmptyItemVersion : NSFileProviderItemVersion

+ (_Bool)supportsSecureCoding;
+ (id)emptyVersion;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)contentVersion;
- (id)metadataVersion;

@end
