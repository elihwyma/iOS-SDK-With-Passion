/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@interface AVTFunCamAvatarPickerStyle : NSObject

{
    double _interitemSpacing;
    struct CGSize _cellSize;
    struct CGSize _engagedCellSize;
    struct UIEdgeInsets _gridEdgeInsets;
}

@property (nonatomic) struct CGSize cellSize;
@property (nonatomic) struct CGSize engagedCellSize;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets gridEdgeInsets;

+ (CDUnknownBlockType)insetProviderForConstant:(double)arg1;
+ (id)defaultLayoutStyle;

- (double)edgeLengthFittingWidth:(double)arg1 environment:(id)arg2;
- (CDUnknownBlockType)imageItemInsetsForGrid;
- (CDUnknownBlockType)imageItemInsetsForList;
- (id)initWithCellSize:(struct CGSize)arg1 engagedCellSize:(struct CGSize)arg2 interitemSpacing:(double)arg3 gridEdgeInsets:(struct UIEdgeInsets)arg4;

@end
