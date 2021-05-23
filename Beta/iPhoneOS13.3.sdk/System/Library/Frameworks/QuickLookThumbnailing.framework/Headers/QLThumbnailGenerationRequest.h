/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class FPItem, FPSandboxingURLWrapper, NSDate, NSError, NSString, NSURL, NSUUID, QLCacheBasicVersionedFileIdentifier, QLCacheFileProviderVersionedFileIdentifier, QLThumbnailRepresentation;

@interface QLThumbnailGenerationRequest : NSObject

{
    _Bool _iconMode;
    _Bool _wantsBaseline;
    _Bool _cancelled;
    _Bool _finished;
    _Bool _downloadingAllowed;
    int _interpolationQuality;
    NSString *_contentType;
    double _minimumDimension;
    double _scale;
    unsigned long long _representationTypes;
    FPSandboxingURLWrapper *_quicklookSandboxWrapper;
    FPSandboxingURLWrapper *_genericSandboxWrapper;
    NSURL *_fileURL;
    FPItem *_item;
    NSUUID *_uuid;
    QLCacheBasicVersionedFileIdentifier *_basicFileIdentifier;
    QLCacheFileProviderVersionedFileIdentifier *_fileProviderFileIdentifier;
    unsigned long long _badgeType;
    long long _iconVariant;
    long long _generationBehavior;
    NSError *_requestIsInvalidError;
    NSDate *_beginDate;
    QLThumbnailRepresentation *_mostRepresentativeThumbnail;
    CDUnknownBlockType _updateBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _statusBlock;
    FPSandboxingURLWrapper *_saveURLSandboxWrapper;
    NSString *_saveURLContentType;
    unsigned long long _typesForWhichUpdateBlockHasBeenCalled;
    NSString *_overriddenContentType;
    struct CGSize _size;
}

@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) CDUnknownBlockType statusBlock;
@property (nonatomic, readonly) long long mostRepresentativeTypeForWhichUpdateBlockHasBeenCalled;
@property (retain, nonatomic) FPSandboxingURLWrapper *quicklookSandboxWrapper;
@property (retain, nonatomic) FPSandboxingURLWrapper *genericSandboxWrapper;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) FPItem *item;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) QLCacheBasicVersionedFileIdentifier *basicFileIdentifier;
@property (retain, nonatomic) QLCacheFileProviderVersionedFileIdentifier *fileProviderFileIdentifier;
@property (nonatomic) unsigned long long badgeType;
@property (nonatomic) long long iconVariant;
@property (nonatomic) _Bool wantsBaseline;
@property (nonatomic) long long generationBehavior;
@property (nonatomic) int interpolationQuality;
@property (retain, nonatomic) NSError *requestIsInvalidError;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long representationTypes;
@property (nonatomic, getter=isCancelled) _Bool cancelled;
@property (nonatomic, getter=isFinished) _Bool finished;
@property (retain, nonatomic) NSDate *beginDate;
@property (retain, nonatomic) QLThumbnailRepresentation *mostRepresentativeThumbnail;
@property (copy, nonatomic) CDUnknownBlockType updateBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;
@property (copy, nonatomic) CDUnknownBlockType statusBlock;
@property (retain, nonatomic) FPSandboxingURLWrapper *saveURLSandboxWrapper;
@property (nonatomic, getter=isDownloadingAllowed) _Bool downloadingAllowed;
@property (copy, nonatomic) NSString *saveURLContentType;
@property (nonatomic) unsigned long long typesForWhichUpdateBlockHasBeenCalled;
@property (retain, nonatomic) NSString *overriddenContentType;
@property (nonatomic) double minimumDimension;
@property (nonatomic) _Bool iconMode;

+ (_Bool)supportsSecureCoding;
+ (id)requestWithThumbnailRequest:(id)arg1;
+ (id)_fileProviderFileIdentifierForFPItem:(id)arg1;
+ (id)_basicFileIdentifierForURL:(id)arg1 error:(id *)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)cancel;
- (void)finish;
- (_Bool)isUbiquitous;
- (id)_stateDescription;
- (id)fileIdentifier;
- (id)initWithFileAtURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 representationTypes:(unsigned long long)arg4;
- (id)saveURL;
- (long long)requestedMostRepresentativeType;
- (void)markDidBegin;
- (_Bool)thumbnailRepresentationTypeMatchesRequestedMostRepresentativeType:(long long)arg1;
- (_Bool)isFileBased;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 representationTypes:(unsigned long long)arg3;
- (id)initWithFPItem:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 representationTypes:(unsigned long long)arg4;
- (_Bool)resultShouldBeSavedToDisk;
- (float)maximumPixelSize;
- (void)setSaveURL:(id)arg1;
- (_Bool)provideGenericIcon;
- (_Bool)provideLowQualityThumbnail;
- (_Bool)provideFullResolutionThumbnail;
- (_Bool)provideCachedResultsOnly;
- (_Bool)forceGeneration;
- (id)equivalentFPItemRequestWithItem:(id)arg1 representationTypes:(unsigned long long)arg2;
- (id)copyWithSize:(struct CGSize)arg1;
- (_Bool)prepareForSending;
- (void)noteUpdateBlockHasBeenCalledForType:(long long)arg1;

@end
