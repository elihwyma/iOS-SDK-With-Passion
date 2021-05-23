/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKLabelCollectionNode.h>

@class NSArray;

@interface NTKHourLabelCollectionNode : NTKLabelCollectionNode

{
    NSArray *_valid;
}

@property (retain, nonatomic) NSArray *valid;

- (void)createSubNodes;
- (id)createParentNodesForHours:(id)arg1 withPositions:(struct CGPoint *)arg2 validHours:(id)arg3;

@end
