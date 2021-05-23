/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class NSArray;

@interface PAMediaConversionServiceCompositeImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

{
    NSArray *_policies;
}

@property (retain) NSArray *policies;

+ (_Bool)supportsSecureCoding;
+ (id)policyWithPolicies:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)processMetadata:(id)arg1;
- (_Bool)metadataNeedsProcessing:(id)arg1;

@end
