/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UICollectionViewLayoutInvalidationContext.h>

@interface WFModulesCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext

{
    _Bool _invalidateDelegateHidden;
    _Bool _invalidateDelegateMetrics;
    _Bool _invalidateDelegateOffsetsAndConnections;
}

@property (nonatomic) _Bool invalidateDelegateHidden;
@property (nonatomic) _Bool invalidateDelegateMetrics;
@property (nonatomic) _Bool invalidateDelegateOffsetsAndConnections;

- (id)init;

@end
