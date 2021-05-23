/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSTimer, UIShadowView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewReorderingSupport : NSObject

{
    UITableViewCell *_reorderedCell;
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_targetIndexPath;
    unsigned int _oldShowHorizontalScrollIndicator:1;
    unsigned int _oldShowVerticalScrollIndicator:1;
    unsigned int _reloadDataCalled:1;
    unsigned int _reorderingCancelled:1;
    unsigned int _reserved:28;
    NSTimer *_autoscrollTimer;
    UIShadowView *_topShadowView;
    UIShadowView *_bottomShadowView;
    _Bool _wasScrollingEnabled;
}

@end
