/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UINavigationItem.h>

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface CKNavigationItem : UINavigationItem

{
    UIScrollView *_contentScrollView;
}

@property (weak, nonatomic) UIScrollView *contentScrollView;

@end
