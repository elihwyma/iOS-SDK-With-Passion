/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>

@interface QLCacheBasicFileIdentifier : QLCacheFileIdentifier

{
    unsigned long long _fileId;
}

@property (readonly) unsigned long long fileId;

+ (_Bool)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)initWithFileId:(unsigned long long)arg1;

@end
