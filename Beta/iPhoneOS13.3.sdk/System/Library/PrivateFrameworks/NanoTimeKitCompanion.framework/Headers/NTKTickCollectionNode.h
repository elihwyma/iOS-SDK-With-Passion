/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCollectionNode.h>

@class UIColor;

@interface NTKTickCollectionNode : NTKCollectionNode

{
    UIColor *_customSmallTickColor;
    unsigned int _ticks;
    unsigned int _l1mod;
    unsigned int _l2mod;
    double _smallColor;
    double _largeColor;
    double _smallFilterWidth;
    double _largeFilterWidth;
    struct CGSize _smallSizeInPoints;
    struct CGSize _largeSizeInPoints;
}

@property (nonatomic) unsigned int ticks;
@property (nonatomic) double smallColor;
@property (nonatomic) double largeColor;
@property (nonatomic) struct CGSize smallSizeInPoints;
@property (nonatomic) struct CGSize largeSizeInPoints;
@property (nonatomic) double smallFilterWidth;
@property (nonatomic) double largeFilterWidth;
@property (nonatomic) unsigned int l1mod;
@property (nonatomic) unsigned int l2mod;

- (void)createSubNodes;
- (id)smallTickColor;
- (id)largeTickColor;
- (void)colorizeWithTickColor:(id)arg1 alternateTickColor:(id)arg2;
- (void)colorizeBackground:(id)arg1;

@end
