/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class QLCacheFileIdentifier, QLThumbnailVersion;

@interface QLCacheVersionedFileIdentifier : NSObject

{
    QLThumbnailVersion *_version;
    QLCacheFileIdentifier *_fileIdentifier;
}

@property (readonly) QLCacheFileIdentifier *fileIdentifier;
@property (readonly) QLThumbnailVersion *version;

+ (_Bool)supportsSecureCoding;
+ (id)versionedFileIdentifierWithThumbnailRequest:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileIdentifier:(id)arg1 version:(id)arg2;

@end
