/*
 Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, QLCacheVersionedFileIdentifier;

@interface QLTThumbnailRequest : NSObject

{
    _Bool _shouldProvideFoldedGenericIcon;
    _Bool _iconMode;
    _Bool _wantsBaseline;
    int _flavor;
    QLCacheVersionedFileIdentifier *_fileIdentifier;
    NSUUID *_uuid;
    double _scale;
    NSString *_contentType;
    unsigned long long _badgeType;
    double _minimumDimension;
    long long _generationBehavior;
    unsigned long long _requestedTypes;
    struct CGSize _size;
}

@property (retain) NSUUID *uuid;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double scale;
@property (readonly) float maximumPixelSize;
@property (readonly) QLCacheVersionedFileIdentifier *fileIdentifier;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) _Bool shouldProvideFoldedGenericIcon;
@property (nonatomic) unsigned long long badgeType;
@property (nonatomic, readonly) _Bool provideGenericIcon;
@property (nonatomic, readonly) _Bool provideLowQualityThumbnail;
@property (nonatomic, readonly) _Bool provideFullResolutionThumbnail;
@property (nonatomic, readonly) long long requestedMostRepresentativeType;
@property (readonly) _Bool iconMode;
@property int flavor;
@property (nonatomic) double minimumDimension;
@property _Bool wantsBaseline;
@property long long generationBehavior;
@property (nonatomic, readonly) _Bool provideCachedResultsOnly;
@property (nonatomic, readonly) _Bool forceGeneration;
@property (nonatomic) unsigned long long requestedTypes;

+ (_Bool)supportsSecureCoding;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconMode:(_Bool)arg4;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconMode:(_Bool)arg4 error:(id *)arg5;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(_Bool)arg5;
+ (id)thumbnailRequestForFileAtURL:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 iconMode:(_Bool)arg5 error:(id *)arg6;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersionedFileIdentifier:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 iconMode:(_Bool)arg4 flavor:(int)arg5 wantsBaseline:(_Bool)arg6 minimumDimension:(double)arg7 requestedTypes:(unsigned long long)arg8;
- (id)computeContentType;

@end
