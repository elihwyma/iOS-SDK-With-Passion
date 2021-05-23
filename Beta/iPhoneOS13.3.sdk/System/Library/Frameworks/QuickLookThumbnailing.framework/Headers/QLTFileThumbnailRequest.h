/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <QuickLookThumbnailing/QLTThumbnailRequest.h>

@class FPItem, FPSandboxingURLWrapper, QLCacheBasicVersionedFileIdentifier;

@interface QLTFileThumbnailRequest : QLTThumbnailRequest

{
    FPSandboxingURLWrapper *_quicklookSandboxWrapper;
    FPSandboxingURLWrapper *_genericSandboxWrapper;
    FPItem *_item;
}

@property (nonatomic, readonly) FPSandboxingURLWrapper *quicklookSandboxWrapper;
@property (nonatomic, readonly) FPSandboxingURLWrapper *genericSandboxWrapper;
@property (nonatomic, readonly) QLCacheBasicVersionedFileIdentifier *fileIdentifier;
@property (retain) FPItem *item;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconMode:(_Bool)arg4;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(_Bool)arg5 error:(id *)arg6;
- (id)computeContentType;
- (_Bool)shouldProvideFoldedGenericIcon;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize)arg2 minimumDimension:(double)arg3 scale:(double)arg4 iconMode:(_Bool)arg5 error:(id *)arg6 shouldMakeSandboxWrapper:(_Bool)arg7;

@end
