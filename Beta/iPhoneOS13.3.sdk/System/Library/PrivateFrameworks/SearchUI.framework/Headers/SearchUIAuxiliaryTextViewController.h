/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIAccessoryViewController.h>

@class TLKAuxilliaryTextView;

@interface SearchUIAuxiliaryTextViewController : SearchUIAccessoryViewController

{
    _Bool _shouldCenter;
    TLKAuxilliaryTextView *_auxilliaryTextView;
}

@property (retain, nonatomic) TLKAuxilliaryTextView *auxilliaryTextView;
@property (nonatomic) _Bool shouldCenter;

+ (_Bool)supportsRowModel:(id)arg1;

- (unsigned long long)type;
- (id)setupView;
- (void)updateWithRowModel:(id)arg1;
- (_Bool)shouldVerticallyCenter;

@end
