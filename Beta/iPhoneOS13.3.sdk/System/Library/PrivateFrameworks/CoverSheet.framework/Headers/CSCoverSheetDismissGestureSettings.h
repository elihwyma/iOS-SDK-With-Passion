/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@interface CSCoverSheetDismissGestureSettings : PTSettings

{
    _Bool _usesGrapeFlags;
    _Bool _extendSwipeUpRegion;
    double _edgeRegionSize;
    double _recognizeAlongEdge;
    double _extendedEdgeRegionSize;
    double _extendedRegionInsetX;
}

@property (nonatomic) _Bool usesGrapeFlags;
@property (nonatomic) double edgeRegionSize;
@property (nonatomic) double recognizeAlongEdge;
@property (nonatomic) _Bool extendSwipeUpRegion;
@property (nonatomic) double extendedEdgeRegionSize;
@property (nonatomic) double extendedRegionInsetX;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
