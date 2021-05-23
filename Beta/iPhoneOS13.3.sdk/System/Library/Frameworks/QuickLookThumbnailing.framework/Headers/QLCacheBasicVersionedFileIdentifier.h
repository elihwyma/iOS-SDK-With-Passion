/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <QuickLookThumbnailing/QLCacheVersionedFileIdentifier.h>

@class QLCacheBasicFileIdentifier;

@interface QLCacheBasicVersionedFileIdentifier : QLCacheVersionedFileIdentifier

@property (readonly) QLCacheBasicFileIdentifier *fileIdentifier;

- (id)initWithThumbnailRequest:(id)arg1;
- (id)initWithFileIdentifier:(id)arg1 version:(id)arg2;

@end
