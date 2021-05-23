/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, UIBarButtonItem, UINavigationItem, UIView;

@interface _UINavigationBarContents : NSObject

{
    UINavigationItem *_topItem;
    UINavigationItem *_backItem;
    NSArray *_viewsRepresentingBackButton;
    UIView *_titleView;
    UIView *_largeTitleView;
    UIView *_promptView;
    UIBarButtonItem *_backBarButtonItem;
    NSArray *_cancelBarButtonItems;
    NSArray *_otherBarButtonItems;
    NSArray *_viewsRepresentingContentBackground;
}

@property (retain, nonatomic) NSArray *viewsRepresentingContentBackground;
@property (retain, nonatomic) UINavigationItem *topItem;
@property (retain, nonatomic) UINavigationItem *backItem;
@property (copy, nonatomic) NSArray *viewsRepresentingBackButton;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *largeTitleView;
@property (retain, nonatomic) UIView *promptView;
@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem;
@property (copy, nonatomic) NSArray *cancelBarButtonItems;
@property (copy, nonatomic) NSArray *otherBarButtonItems;

- (id)init;

@end
