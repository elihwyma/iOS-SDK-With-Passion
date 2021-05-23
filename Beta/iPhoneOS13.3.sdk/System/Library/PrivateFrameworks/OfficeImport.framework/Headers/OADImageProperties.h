/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OADGraphicProperties.h>

@class OADImageFill;

__attribute__((visibility("hidden")))
@interface OADImageProperties : OADGraphicProperties

{
    OADImageFill *mImageFill;
}

+ (id)defaultProperties;

- (id)description;
- (id)imageFill;
- (_Bool)hasImageFill;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (void)setImageFill:(id)arg1;

@end
