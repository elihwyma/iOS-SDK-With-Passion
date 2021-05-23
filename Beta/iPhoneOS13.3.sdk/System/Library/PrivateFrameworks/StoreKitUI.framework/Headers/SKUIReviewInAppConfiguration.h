/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, SKUIClientContext, UIImage, UIViewController;

@interface SKUIReviewInAppConfiguration : NSObject

{
    _Bool _sandboxed;
    NSString *_itemID;
    NSString *_title;
    UIViewController *_viewController;
    SKUIClientContext *_clientContext;
    NSString *_customDescription;
    UIImage *_icon;
}

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (copy, nonatomic) NSString *customDescription;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic, getter=isSandboxed) _Bool sandboxed;

@end
