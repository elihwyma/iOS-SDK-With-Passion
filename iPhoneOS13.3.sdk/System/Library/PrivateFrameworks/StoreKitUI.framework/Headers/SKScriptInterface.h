//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUScriptInterface.h>

@class SKProductPageViewController;

@interface SKScriptInterface : SUScriptInterface
{
    SKProductPageViewController *_parentProductPageViewController;
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
@property(nonatomic) __weak SKProductPageViewController *parentProductPageViewController; // @synthesize parentProductPageViewController=_parentProductPageViewController;
// - (void).cxx_destruct;
- (void)showStoreSheetWithRequest:(id)arg1 animated:(BOOL)arg2;
- (id)makeStoreSheetRequest;

@end

