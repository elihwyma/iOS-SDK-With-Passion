/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKLabelCollectionNode.h>

@class NSArray;

@interface NTKMinutesMinus15_30_45_60LabelCollectionNode : NTKLabelCollectionNode

{
    NSArray *_visibleComplicationSlots;
}

@property (retain, nonatomic) NSArray *visibleComplicationSlots;

- (void)createSubNodes;
- (void)_updateNodeVisibility;

@end
