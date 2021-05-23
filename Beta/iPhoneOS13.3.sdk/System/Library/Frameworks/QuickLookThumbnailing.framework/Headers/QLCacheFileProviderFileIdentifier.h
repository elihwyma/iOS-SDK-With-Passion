/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>

@class NSString;

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier

{
    NSString *_fileProviderIdentifier;
    NSString *_itemIdentifier;
}

@property (copy, readonly) NSString *fileProviderIdentifier;
@property (copy, readonly) NSString *itemIdentifier;

+ (_Bool)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;
+ (id)knownFileProviderIdentifiersSoFar;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileProviderIdentifier:(id)arg1 itemIdentifier:(id)arg2;

@end
