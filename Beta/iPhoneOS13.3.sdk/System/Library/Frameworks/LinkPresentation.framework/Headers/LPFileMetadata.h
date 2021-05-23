/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPSpecializationMetadata.h>

@class LPImage, NSDate, NSString;

@interface LPFileMetadata : LPSpecializationMetadata

{
    NSString *_name;
    NSString *_type;
    unsigned long long _size;
    LPImage *_thumbnail;
    LPImage *_icon;
    NSDate *_creationDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) LPImage *thumbnail;
@property (retain, nonatomic) LPImage *icon;
@property (retain, nonatomic) NSDate *creationDate;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_isImage;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (long long)summaryTypeForTransformer:(id)arg1;
- (id)_fileTypeStringForTransformer:(id)arg1;
- (id)_fileDetailStringForTransformer:(id)arg1;
- (id)_nameForTransformer:(id)arg1;
- (id)_bottomCaptionStringForTransformer:(id)arg1;
- (_Bool)_shouldUseSquareIcon;
- (_Bool)_shouldUseCircularIcon;
- (id)_singleLineDescriptionForRemoteFileWithTransformer:(id)arg1;
- (_Bool)_isPlainText;

@end
