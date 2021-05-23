/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPSpecializationMetadata.h>

@class LPArtworkMetadata, LPImage, NSArray, NSString, NSURL;

@interface LPiTunesMediaSongMetadata : LPSpecializationMetadata

{
    NSString *_storeFrontIdentifier;
    NSString *_storeIdentifier;
    NSString *_name;
    NSString *_artist;
    NSString *_album;
    NSString *_lyrics;
    LPImage *_artwork;
    LPArtworkMetadata *_artworkMetadata;
    NSURL *_previewURL;
    NSArray *_offers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *album;
@property (copy, nonatomic) NSString *lyrics;
@property (retain, nonatomic) LPImage *artwork;
@property (copy, nonatomic) LPArtworkMetadata *artworkMetadata;
@property (copy, nonatomic) NSURL *previewURL;
@property (copy, nonatomic) NSArray *offers;

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;
+ (id)transcriptBoldTextFont;
+ (id)statusForText:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (void)_enumerateAsynchronousFields:(CDUnknownBlockType)arg1;
- (void)populateMetadataForBackwardCompatibility:(id)arg1;
- (void)initializeForTransformer:(id)arg1;
- (void)destroyForTransformer:(id)arg1;
- (id)statusForTransformer:(id)arg1;
- (id)actionURLForTransformer:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (_Bool)canGeneratePresentationPropertiesForURL:(id)arg1;
- (id)inlinePlaybackInformationForURL:(id)arg1;
- (id)storeIdentifierForTransformer:(id)arg1;

@end
