/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUILeadingViewController.h>

@class SearchUIImageView;

@interface SearchUIThumbnailViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIImageView *view;

+ (_Bool)supportsRowModel:(id)arg1;

- (unsigned long long)type;
- (id)setupView;
- (void)updateWithRowModel:(id)arg1;
- (_Bool)shouldVerticallyCenter;
- (void)forceVerticalCenteringOfContents;

@end
