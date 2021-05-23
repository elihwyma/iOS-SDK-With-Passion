/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDAbstractLayerReference.h>

@class TDFlattenedImageRenditionSpec, TDSimpleArtworkRenditionSpec;

@interface TDResolvedLayerReference : TDAbstractLayerReference

@property (retain, nonatomic) TDSimpleArtworkRenditionSpec *reference;
@property (retain, nonatomic) TDFlattenedImageRenditionSpec *stack;

@end
