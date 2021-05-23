/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@interface PAMediaConversionServiceStripLocationImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

+ (_Bool)supportsSecureCoding;
+ (id)standardPolicy;

- (id)processMetadata:(id)arg1;
- (_Bool)metadataNeedsProcessing:(id)arg1;

@end
