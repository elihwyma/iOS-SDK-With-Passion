/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPSpecializationMetadata.h>

@class LPImage, NSDate, NSString;

@interface LPApplePhotosMomentMetadata : LPSpecializationMetadata

{
    NSString *_title;
    unsigned long long _photoCount;
    unsigned long long _videoCount;
    unsigned long long _otherItemCount;
    LPImage *_keyPhoto;
    NSDate *_expirationDate;
    NSDate *_earliestAssetDate;
    NSDate *_latestAssetDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long photoCount;
@property (nonatomic) unsigned long long videoCount;
@property (nonatomic) unsigned long long otherItemCount;
@property (retain, nonatomic) LPImage *keyPhoto;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSDate *earliestAssetDate;
@property (copy, nonatomic) NSDate *latestAssetDate;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;

@end
