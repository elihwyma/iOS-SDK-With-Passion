/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKStoreButton;

@interface SearchUIAppStoreButtonViewController : SearchUIAccessoryViewController

{
    _Bool _appIsInstalled;
    TLKStoreButton *_appStoreButton;
}

@property (retain, nonatomic) TLKStoreButton *appStoreButton;
@property (nonatomic) _Bool appIsInstalled;

+ (_Bool)supportsRowModel:(id)arg1;

- (unsigned long long)type;
- (id)setupView;
- (void)buttonPressed;
- (void)updateWithRowModel:(id)arg1;
- (_Bool)shouldTopAlignForAccessibilityContentSizes;

@end
