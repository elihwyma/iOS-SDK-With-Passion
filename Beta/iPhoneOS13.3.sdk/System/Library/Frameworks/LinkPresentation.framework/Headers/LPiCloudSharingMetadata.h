/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPSpecializationMetadata.h>

@class LPImage, NSString;

@interface LPiCloudSharingMetadata : LPSpecializationMetadata

{
    NSString *_applicationBundleIdenfier;
    NSString *_application;
    NSString *_title;
    LPImage *_icon;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *applicationBundleIdenfier;
@property (copy, nonatomic) NSString *application;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) LPImage *icon;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (id)_bundleIdentifierMap;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedApplicationName;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)computeIcon;
- (id)_topCaptionStringWithApplicationName:(id)arg1;
- (id)_bottomCaptionStringWithApplicationName:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;

@end
