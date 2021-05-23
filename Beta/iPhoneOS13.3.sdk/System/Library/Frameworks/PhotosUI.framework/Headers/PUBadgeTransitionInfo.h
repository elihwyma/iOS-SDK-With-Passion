/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface PUBadgeTransitionInfo : NSObject

{
    UIView *_snapshotView;
    unsigned long long _badgesCorner;
    struct UIOffset _badgesOffset;
    struct CGRect _frame;
}

@property (retain, nonatomic) UIView *snapshotView;
@property (nonatomic) struct UIOffset badgesOffset;
@property (nonatomic) unsigned long long badgesCorner;
@property (nonatomic) struct CGRect frame;

@end
