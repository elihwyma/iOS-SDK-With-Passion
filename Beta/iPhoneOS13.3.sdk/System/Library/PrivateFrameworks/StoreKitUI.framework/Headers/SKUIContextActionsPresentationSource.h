/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class UIBarButtonItem, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIContextActionsPresentationSource : NSObject

{
    UIViewController *_viewController;
    UIView *_sourceView;
    UIBarButtonItem *_barButtonItem;
    struct CGRect _sourceRect;
}

@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect sourceRect;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;

- (id)initWithViewController:(id)arg1;
- (void)presentViewController:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;

@end
