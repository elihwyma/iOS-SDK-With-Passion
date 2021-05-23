/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPSpecializationMetadata.h>

@class CNPostalAddress, LPImage, NSNumber, NSString;

@interface LPMapMetadata : LPSpecializationMetadata

{
    NSString *_name;
    NSString *_address;
    CNPostalAddress *_addressComponents;
    NSString *_category;
    LPImage *_categoryIcon;
    NSString *_searchQuery;
    NSString *_directionsType;
    NSNumber *_transportType;
    NSString *_directionsSourceAddress;
    CNPostalAddress *_directionsSourceAddressComponents;
    NSString *_directionsSourceLocationName;
    NSString *_directionsDestinationAddress;
    CNPostalAddress *_directionsDestinationAddressComponents;
    NSString *_directionsDestinationLocationName;
    NSNumber *_distance;
    LPImage *_image;
    LPImage *_darkImage;
    struct CLLocationCoordinate2D _location;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CLLocationCoordinate2D location;
@property (copy, nonatomic) NSString *address;
@property (copy, nonatomic) CNPostalAddress *addressComponents;
@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) LPImage *categoryIcon;
@property (copy, nonatomic) NSString *searchQuery;
@property (copy, nonatomic) NSString *directionsType;
@property (retain, nonatomic) NSNumber *transportType;
@property (copy, nonatomic) NSString *directionsSourceAddress;
@property (copy, nonatomic) CNPostalAddress *directionsSourceAddressComponents;
@property (copy, nonatomic) NSString *directionsSourceLocationName;
@property (copy, nonatomic) NSString *directionsDestinationAddress;
@property (copy, nonatomic) CNPostalAddress *directionsDestinationAddressComponents;
@property (copy, nonatomic) NSString *directionsDestinationLocationName;
@property (retain, nonatomic) NSNumber *distance;
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImage *darkImage;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)_style;
- (id)_address;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (id)_directionsSourceAddress;
- (id)_directionsDestinationAddress;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)_deduplicatedAddress;
- (_Bool)_isDirections;
- (id)_singleLineVerboseDescription;
- (id)_iconForTransport;
- (id)_resolvedImage;
- (id)_singleLineShortDescription;
- (id)_topLineForTransformer:(id)arg1;
- (id)_bottomLineForTwoUpForTransformer:(id)arg1;

@end
