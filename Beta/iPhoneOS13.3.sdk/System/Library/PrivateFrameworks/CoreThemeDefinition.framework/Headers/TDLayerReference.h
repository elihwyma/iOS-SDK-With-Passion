/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreThemeDefinition/TDAbstractLayerReference.h>

@class TDLayerStackRenditionSpec, TDNamedArtworkProduction;

@interface TDLayerReference : TDAbstractLayerReference

@property (retain, nonatomic) TDNamedArtworkProduction *reference;
@property (retain, nonatomic) TDLayerStackRenditionSpec *stack;

- (id)cuiLayerReference;

@end
