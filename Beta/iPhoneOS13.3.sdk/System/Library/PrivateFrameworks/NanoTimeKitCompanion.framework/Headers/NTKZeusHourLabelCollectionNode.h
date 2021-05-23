/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKHourLabelCollectionNode.h>

@class NSArray;

@interface NTKZeusHourLabelCollectionNode : NTKHourLabelCollectionNode

{
    unsigned long long _bleed;
    struct CGPoint _childrenDefaultPositions[12];
    struct CGPoint _childrenStatusPositions[12];
    unsigned long long _density;
    NSArray *_visibleNodesForCurrentDensity;
}

@property (retain, nonatomic) NSArray *visibleNodesForCurrentDensity;
@property (nonatomic) unsigned long long density;

+ (id)hours12ZeusWithFont:(long long)arg1 bleed:(unsigned long long)arg2 forDevice:(id)arg3;

- (void)applyTransitionFraction:(double)arg1 fromDensity:(unsigned long long)arg2 toDensity:(unsigned long long)arg3;
- (void)createSubNodes;
- (struct CGPoint)childStatusPositionForIndex:(long long)arg1;
- (struct CGPoint)childDefaultPositionForIndex:(long long)arg1;
- (id)initWithFont:(long long)arg1 bleed:(unsigned long long)arg2 forDevice:(id)arg3;
- (void)_setupPositions;
- (_Bool)_hourNumberAtIndex:(unsigned long long)arg1 isVisibleWithDensity:(unsigned long long)arg2;

@end
