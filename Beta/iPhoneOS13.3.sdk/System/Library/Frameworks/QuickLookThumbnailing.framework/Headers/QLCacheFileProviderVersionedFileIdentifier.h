/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <QuickLookThumbnailing/QLCacheVersionedFileIdentifier.h>

@class QLCacheFileProviderFileIdentifier;

@interface QLCacheFileProviderVersionedFileIdentifier : QLCacheVersionedFileIdentifier

@property (readonly) QLCacheFileProviderFileIdentifier *fileIdentifier;

- (id)initWithThumbnailRequest:(id)arg1;
- (id)initWithFileIdentifier:(id)arg1 version:(id)arg2;

@end
