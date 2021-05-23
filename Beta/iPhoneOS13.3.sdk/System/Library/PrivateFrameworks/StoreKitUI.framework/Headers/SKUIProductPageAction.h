/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, SKUIItem, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIProductPageAction : NSObject

{
    long long _actionType;
    SKUIItem *_item;
    NSString *_urlTitle;
    CDUnknownBlockType _viewControllerBlock;
    NSURL *_url;
}

@property (nonatomic) long long actionType;
@property (retain, nonatomic) SKUIItem *item;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) CDUnknownBlockType viewControllerBlock;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)actionWithType:(long long)arg1;

@end
