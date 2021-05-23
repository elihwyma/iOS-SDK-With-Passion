/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class _UIFlowLayoutRow, _UIFlowLayoutSection;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutItem : NSObject

{
    struct {
        unsigned int sizeEstimated:1;
        unsigned int positionEstimated:1;
        unsigned int sizeHasBeenSet:1;
    } _itemFlags;
    _UIFlowLayoutSection *_section;
    _UIFlowLayoutRow *_rowObject;
    struct CGRect _itemFrame;
}

@property (weak, nonatomic) _UIFlowLayoutSection *section;
@property (weak, nonatomic) _UIFlowLayoutRow *rowObject;
@property (nonatomic) struct CGRect itemFrame;
@property (nonatomic, getter=isSizeEstimated) _Bool sizeEstimated;
@property (nonatomic) _Bool sizeHasBeenSet;
@property (nonatomic, getter=isPositionEstimated) _Bool positionEstimated;

- (id)copy;

@end
