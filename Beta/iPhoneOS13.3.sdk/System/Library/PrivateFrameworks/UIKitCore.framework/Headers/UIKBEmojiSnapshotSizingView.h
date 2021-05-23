/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UIKBEmojiSnapshotSizingView : UIView

{
    struct CGSize _snapshotSize;
    UIView *_snapshotView;
}

@property (nonatomic, readonly) UIView *snapshotView;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (id)initWithSnapshotView:(id)arg1;

@end
