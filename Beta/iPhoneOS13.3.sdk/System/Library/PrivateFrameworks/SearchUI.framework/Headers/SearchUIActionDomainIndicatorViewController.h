/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIAccessoryViewController.h>

@class SearchUIImageView;

@interface SearchUIActionDomainIndicatorViewController : SearchUIAccessoryViewController

@property (retain, nonatomic) SearchUIImageView *view;

+ (_Bool)supportsRowModel:(id)arg1;

- (unsigned long long)type;
- (id)setupView;
- (void)updateWithRowModel:(id)arg1;

@end
