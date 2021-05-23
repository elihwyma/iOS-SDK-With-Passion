/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIView, _UICollectionViewListCell;

__attribute__((visibility("hidden")))
@interface _UICollectionViewListCellVisualProvider : NSObject

{
    _UICollectionViewListCell *_cell;
}

@property (nonatomic, readonly) long long defaultFocusStyle;
@property (nonatomic, readonly) _Bool canFocusProgrammatically;
@property (nonatomic, readonly) UIView *accessoryManagerContainerView;

- (id)initWithListCell:(id)arg1;
- (void)configureFocusedFloatingContentView:(id)arg1;

@end
