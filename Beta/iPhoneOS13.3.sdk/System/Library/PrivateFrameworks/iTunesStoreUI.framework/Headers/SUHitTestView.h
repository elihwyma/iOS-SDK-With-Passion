/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SUHitTestView : UIView

{
    NSMutableArray *_hitTestTargets;
}

- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeHitTestTarget:(id)arg1;
- (void)addHitTestTarget:(id)arg1;

@end
