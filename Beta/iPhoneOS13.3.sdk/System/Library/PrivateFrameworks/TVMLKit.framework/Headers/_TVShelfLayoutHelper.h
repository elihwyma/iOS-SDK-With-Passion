/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class _TVShelfViewLayout;

__attribute__((visibility("hidden")))
@interface _TVShelfLayoutHelper : NSObject

{
    long long _sectionCount;
    long long *_sectionOffsets;
    struct CGRect *_cellFrames;
    struct CGRect *_headerFrames;
    struct UIEdgeInsets *_sectionInsets;
    _TVShelfViewLayout *_shelfViewLayout;
    long long _actualRowCount;
    double _tallestInsetTop;
    double _tallestInsetBottom;
    double _tallestHeaderHeight;
    double _tallestColumnHeight;
}

@property (weak, nonatomic, readonly) _TVShelfViewLayout *shelfViewLayout;
@property (nonatomic, readonly) long long actualRowCount;
@property (nonatomic, readonly) double tallestInsetTop;
@property (nonatomic, readonly) double tallestInsetBottom;
@property (nonatomic, readonly) double tallestHeaderHeight;
@property (nonatomic, readonly) double tallestColumnHeight;

- (void)dealloc;
- (struct CGRect)frameForItemAtIndexPath:(id)arg1;
- (void)_freeBuffers;
- (void)_compute;
- (id)initWithShelfViewLayout:(id)arg1;
- (struct CGRect)frameForHeaderInSection:(long long)arg1;
- (struct UIEdgeInsets)insetForSection:(long long)arg1;

@end
