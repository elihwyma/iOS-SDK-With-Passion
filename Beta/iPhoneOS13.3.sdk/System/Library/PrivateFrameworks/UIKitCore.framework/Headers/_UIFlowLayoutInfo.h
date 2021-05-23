/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutInfo : NSObject

{
    _Bool _useFloatingHeaderFooter;
    struct CGRect _visibleBounds;
    struct CGSize _layoutSize;
    _Bool _isValid;
    struct CGSize _computedEstimatedSum;
    long long _computedEstimatedCount;
    _Bool _usesFloatingHeaderFooter;
    _Bool _horizontal;
    _Bool _leftToRight;
    _Bool _estimatesSizes;
    NSMutableArray *_sections;
    double _dimension;
    UICollectionViewFlowLayout *_layout;
    CDStruct_2f5e8405 _rowAlignmentOptions;
    struct CGSize _contentSize;
}

@property (nonatomic, readonly) NSMutableArray *sections;
@property (nonatomic) _Bool usesFloatingHeaderFooter;
@property (nonatomic) double dimension;
@property (nonatomic) _Bool horizontal;
@property (nonatomic) _Bool leftToRight;
@property (nonatomic) struct CGSize contentSize;
@property (nonatomic) CDStruct_2f5e8405 rowAlignmentOptions;
@property (weak, nonatomic) UICollectionViewFlowLayout *layout;
@property (nonatomic) _Bool estimatesSizes;
@property (nonatomic, readonly) struct CGSize computedEstimatedSize;

- (id)init;
- (id)copy;
- (void)invalidate:(_Bool)arg1;
- (id)snapshot;
- (id)specifiedItemSizes;
- (id)setSize:(struct CGSize)arg1 forItemAtIndexPath:(id)arg2;
- (id)addSection;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
- (void)setSizes:(id)arg1 forItemsAtIndexPaths:(id)arg2;
- (void)didUpdateSizeForSection:(long long)arg1 withDelta:(double)arg2;
- (id)invalidatedIndexPaths;
- (void)updateEstimatedSizeForSize:(struct CGSize)arg1;

@end
