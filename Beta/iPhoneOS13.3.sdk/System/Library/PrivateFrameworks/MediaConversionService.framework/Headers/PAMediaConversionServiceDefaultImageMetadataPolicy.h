/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@interface PAMediaConversionServiceDefaultImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

{
    float _lossyCompressionQuality;
}

@property float lossyCompressionQuality;

+ (_Bool)supportsSecureCoding;
+ (id)standardPolicy;
+ (id)policyWithLossyCompressionQuality:(float)arg1;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)processMetadata:(id)arg1;
- (_Bool)metadataNeedsProcessing:(id)arg1;
- (id)initWithLossyCompressionQuality:(float)arg1;

@end
