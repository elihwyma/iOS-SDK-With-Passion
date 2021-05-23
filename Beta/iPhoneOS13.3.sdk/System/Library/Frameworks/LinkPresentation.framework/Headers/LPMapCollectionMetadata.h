/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPSpecializationMetadata.h>

@class LPImage, NSArray, NSString;

@interface LPMapCollectionMetadata : LPSpecializationMetadata

{
    unsigned int _numberOfItems;
    NSString *_name;
    LPImage *_icon;
    LPImage *_image;
    LPImage *_darkImage;
    NSArray *_addresses;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int numberOfItems;
@property (retain, nonatomic) LPImage *icon;
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImage *darkImage;
@property (copy, nonatomic) NSArray *addresses;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_bottomLine;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)_resolvedImage;

@end
