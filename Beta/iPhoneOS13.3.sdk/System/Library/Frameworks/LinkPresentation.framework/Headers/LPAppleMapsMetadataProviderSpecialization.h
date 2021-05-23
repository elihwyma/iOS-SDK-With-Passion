/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPMetadataProviderSpecialization.h>

@class CLGeocoder, LPMapCollectionMetadata, LPMapMetadata, _MKURLParser;

__attribute__((visibility("hidden")))
@interface LPAppleMapsMetadataProviderSpecialization : LPMetadataProviderSpecialization

{
    _Bool _cancelled;
    CLGeocoder *_geocoder;
    _MKURLParser *_parser;
    LPMapMetadata *_mapMetadata;
    LPMapCollectionMetadata *_collectionMetadata;
}

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:(id)arg1;

- (void)cancel;
- (void)start;
- (void)complete;
- (void)fail;
- (void)continueWithBaseSnapshotOptions:(id)arg1 mapItems:(id)arg2;
- (void)completeWithCollection;
- (void)completeWithDirections;
- (void)resolveMapRegionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)completeWithSearchQuery:(id)arg1;
- (void)completeWithMapItem:(id)arg1;
- (id)geocoder;
- (void)completeWithPlacemark:(id)arg1;

@end
