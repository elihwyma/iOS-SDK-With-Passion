//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADGraphicProperties.h>

@class OADImageFill;

__attribute__((visibility("hidden")))
@interface OADImageProperties : OADGraphicProperties
{
    OADImageFill *mImageFill;
}

+ (id)defaultProperties;
// - (void).cxx_destruct;
- (id)description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)hasImageFill;
- (void)setImageFill:(id)arg1;
- (id)imageFill;

@end

