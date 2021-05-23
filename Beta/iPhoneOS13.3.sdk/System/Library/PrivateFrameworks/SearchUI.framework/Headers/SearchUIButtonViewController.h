/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUILeadingViewController.h>

@class SearchUIImageButton;

@interface SearchUIButtonViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageButton *view;

+ (_Bool)supportsRowModel:(id)arg1;

- (unsigned long long)type;
- (id)setupView;
- (void)buttonPressed;
- (void)updateWithRowModel:(id)arg1;
- (_Bool)shouldVerticallyCenter;

@end
