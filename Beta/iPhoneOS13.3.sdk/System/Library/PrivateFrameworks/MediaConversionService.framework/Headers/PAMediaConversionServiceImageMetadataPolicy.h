/*
 Image: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

#import <Foundation/NSObject.h>

@interface PAMediaConversionServiceImageMetadataPolicy : NSObject

+ (_Bool)supportsSecureCoding;
+ (id)standardPolicy;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)processMetadata:(id)arg1;
- (_Bool)metadataNeedsProcessing:(id)arg1;

@end
