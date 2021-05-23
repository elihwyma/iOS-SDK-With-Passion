/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <QuickLookThumbnailing/QLTThumbnailRequest.h>

@class FPItem, QLCacheFileProviderVersionedFileIdentifier;

@interface QLTUbiquitousFileThumbnailRequest : QLTThumbnailRequest

{
    FPItem *_item;
}

@property (readonly) FPItem *item;
@property (readonly) QLCacheFileProviderVersionedFileIdentifier *fileIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFPItem:(id)arg1 size:(struct CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(_Bool)arg5;
- (id)computeContentType;
- (_Bool)shouldProvideFoldedGenericIcon;

@end
