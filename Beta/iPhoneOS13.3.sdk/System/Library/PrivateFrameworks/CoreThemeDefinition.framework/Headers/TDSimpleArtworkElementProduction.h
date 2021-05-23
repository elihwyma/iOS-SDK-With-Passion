/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDElementProduction.h>

@class TDTemplateRenderingMode;

@interface TDSimpleArtworkElementProduction : TDElementProduction

@property (retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode;
@property (nonatomic) _Bool optOutOfThinning;
@property (nonatomic) _Bool isFlippable;
@property (nonatomic) _Bool preservesVectorRepresentation;
@property (nonatomic) _Bool recognitionImage;
@property (nonatomic) short autoscalingType;

- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(_Bool)arg2;

@end
