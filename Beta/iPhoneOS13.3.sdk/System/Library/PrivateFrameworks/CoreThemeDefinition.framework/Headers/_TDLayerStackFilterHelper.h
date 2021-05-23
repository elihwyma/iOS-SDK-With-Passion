/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, TDLayerStackRenditionSpec;

@interface _TDLayerStackFilterHelper : NSObject

{
    TDLayerStackRenditionSpec *_layerStackRendition;
    NSMutableArray *_excludedIdioms;
    NSMutableArray *_excludedSubtypes;
    NSMutableArray *_excludedScaleFactors;
    NSMutableArray *_excludedHorizontalSizeClasses;
    NSMutableArray *_excludedVerticalSizeClasses;
    NSMutableArray *_excludedDirections;
    NSMutableArray *_excludedLayers;
    NSMutableArray *_excludedPresentationStates;
    NSMutableArray *_excludedSizes;
    NSMutableArray *_excludedStates;
    NSMutableArray *_excludedValues;
}

@property (retain, nonatomic) TDLayerStackRenditionSpec *layerStackRendition;
@property (retain, nonatomic) NSMutableArray *excludedIdioms;
@property (retain, nonatomic) NSMutableArray *excludedSubtypes;
@property (retain, nonatomic) NSMutableArray *excludedScaleFactors;
@property (retain, nonatomic) NSMutableArray *excludedHorizontalSizeClasses;
@property (retain, nonatomic) NSMutableArray *excludedVerticalSizeClasses;
@property (retain, nonatomic) NSMutableArray *excludedDirections;
@property (retain, nonatomic) NSMutableArray *excludedLayers;
@property (retain, nonatomic) NSMutableArray *excludedPresentationStates;
@property (retain, nonatomic) NSMutableArray *excludedSizes;
@property (retain, nonatomic) NSMutableArray *excludedStates;
@property (retain, nonatomic) NSMutableArray *excludedValues;

- (id)init;
- (void)dealloc;
- (void)establishExclusionsWithHelper:(id)arg1 idioms:(id)arg2 sizeClasses:(id)arg3;
- (_Bool)allowKey:(id)arg1;

@end
