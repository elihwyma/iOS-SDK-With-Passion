/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PLImageFormat : NSObject

{
    _Bool _isCropped;
    _Bool _isAlwaysFullScreen;
    unsigned short _formatID;
    NSString *_name;
    double _dimension;
    long long _formatMode;
    long long _version;
    const CDStruct_e5ce1f5a *_bakedFormatInfo;
    long long _thumbnailKind;
    struct CGSize _size;
}

@property (nonatomic) unsigned short formatID;
@property (nonatomic) long long thumbnailKind;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) _Bool isCropped;
@property (nonatomic, readonly) double dimension;
@property (nonatomic, readonly) long long formatMode;
@property (nonatomic, readonly) _Bool isSquare;
@property (nonatomic, readonly) _Bool dimensionsReferToShortSide;
@property (nonatomic, readonly) _Bool isTable;
@property (nonatomic, readonly) _Bool isThumbnail;
@property (nonatomic, readonly) _Bool isAlwaysFullScreen;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) _Bool refersToLatestVersion;
@property (nonatomic, readonly) _Bool refersToUnadjustedVersion;
@property (nonatomic, readonly) _Bool refersToPenultimateVersion;
@property (nonatomic, readonly) _Bool refersToOriginalVersion;
@property (nonatomic, readonly) const CDStruct_e5ce1f5a *bakedFormatInfo;
@property (nonatomic, readonly) _Bool bakedFormatIsDynamicallySized;

+ (id)formatWithID:(unsigned short)arg1;
+ (id)_syncFormats;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (long long)compare:(id)arg1;
- (id)shortDescription;
- (struct CGSize)scaledSizeForSourceSize:(struct CGSize)arg1;
- (unsigned long long)fullSizeMinShortSide;
- (unsigned long long)fullSizeDesiredLongSide;
- (unsigned long long)fullSizeMaxLongSide;
- (struct CGSize)scaledSizeForSourceSize:(struct CGSize)arg1 capLength:(_Bool)arg2;
- (_Bool)isEqualToFormat:(id)arg1;
- (id)thumbnailSpecification;
- (_Bool)_canDegradeToFormat:(id)arg1;
- (_Bool)_isAcceptableForViewSize:(struct CGSize)arg1 contentMode:(long long)arg2 sourceAspectRatio:(double)arg3 desiredImageSize:(struct CGSize)arg4 demoteFactor:(double)arg5;
- (id)initWithName:(id)arg1 size:(struct CGSize)arg2 isCropped:(_Bool)arg3;
- (id)initWithName:(id)arg1 size:(struct CGSize)arg2 isCropped:(_Bool)arg3 version:(long long)arg4 isAlwaysFullScreen:(_Bool)arg5;
- (id)initWithName:(id)arg1 size:(struct CGSize)arg2 isCropped:(_Bool)arg3 version:(long long)arg4 isAlwaysFullScreen:(_Bool)arg5 formatMode:(long long)arg6 thumbnailKind:(long long)arg7;
- (id)initWithFormatID:(unsigned short)arg1;
- (struct CGSize)sizeOfThumbnailWithAspectRatio:(double)arg1;
- (struct CGSize)_shortSideFormatScaledSizeForSourceSize:(struct CGSize)arg1 capLength:(_Bool)arg2;

@end
