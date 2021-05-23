/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIImage, _UIFocusMapSearchInfo, _UIFocusMapSnapshot;

__attribute__((visibility("hidden")))
@interface _UIFocusMapSnapshotDebugInfo : NSObject

{
    UIImage *_image;
    _UIFocusMapSnapshot *_snapshot;
    _UIFocusMapSearchInfo *_focusMapSearchInfo;
    struct CGPoint _imageAnchorPoint;
}

@property (nonatomic, readonly) _UIFocusMapSnapshot *snapshot;
@property (weak, nonatomic, readonly) _UIFocusMapSearchInfo *focusMapSearchInfo;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) struct CGPoint imageAnchorPoint;

+ (id)_summaryImageForDebugInfoArray:(id)arg1 forFocusMovementWithInfo:(id)arg2 scaleFactor:(double)arg3;

- (id)_drawImage;
- (struct CGRect)_rectContainingAllFocusRegions;
- (id)initWithSnapshot:(id)arg1 focusMapSearchInfo:(id)arg2;

@end
