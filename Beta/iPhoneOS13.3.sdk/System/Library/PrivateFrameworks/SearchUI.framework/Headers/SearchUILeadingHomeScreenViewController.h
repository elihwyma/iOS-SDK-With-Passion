/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUILeadingViewController.h>

@class NSString, SearchUIHomeScreenAppIconView;

@interface SearchUILeadingHomeScreenViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIHomeScreenAppIconView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsRowModel:(id)arg1;

- (unsigned long long)type;
- (void)didEngageResult:(id)arg1;
- (id)setupView;
- (void)updateWithRowModel:(id)arg1;
- (_Bool)shouldVerticallyCenter;
- (void)dismissIfNecessaryForIconDrag;

@end
