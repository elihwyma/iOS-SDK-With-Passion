/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <MediaConversionService/PAMediaConversionServiceDefaultImageMetadataPolicy.h>

@interface PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy : PAMediaConversionServiceDefaultImageMetadataPolicy

+ (_Bool)supportsSecureCoding;
+ (void)_filterImageProperties:(id)arg1 metadataWithKey:(id)arg2 preserveProperties:(id)arg3;
+ (id)policyWithAllowLocation:(_Bool)arg1;

- (id)processMetadata:(id)arg1;
- (_Bool)metadataNeedsProcessing:(id)arg1;

@end
