/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SKWeakContainer : NSObject

{
    _Bool _wasOnScreen;
    UIView *_scrollingView;
    UIView *_trackingView;
}

@property (weak, nonatomic) UIView *scrollingView;
@property (weak, nonatomic) UIView *trackingView;
@property (nonatomic) _Bool wasOnScreen;

@end
