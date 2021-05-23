/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStoreUI/SUScriptInterface.h>

@class SKProductPageViewController;

@interface SKScriptInterface : SUScriptInterface

{
    SKProductPageViewController *_parentProductPageViewController;
}

@property (weak, nonatomic) SKProductPageViewController *parentProductPageViewController;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)makeStoreSheetRequest;
- (void)showStoreSheetWithRequest:(id)arg1 animated:(_Bool)arg2;

@end
