/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWSimpleCache.h>

@interface BWIrisStillImageMovieMetadataCache : BWSimpleCache

- (void)cacheStillImageTransformDataFromMetadata:(id)arg1 transformReferenceDimensions:(CDStruct_79c71658)arg2;
- (void)cacheStillImageVideoToPhotoTransform:(id)arg1 forSettingsID:(id)arg2;
- (id)copyAndClearStillImageTransformDataForSettingsID:(id)arg1;

@end
