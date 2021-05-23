/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUILeadingViewController.h>

@class NSString, SearchUIContactsThumbnailView;

@interface SearchUILeadingContactViewController : SearchUILeadingViewController

@property (retain, nonatomic) SearchUIContactsThumbnailView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsRowModel:(id)arg1;

- (unsigned long long)type;
- (void)hide;
- (void)updateWithContacts:(id)arg1;
- (id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (id)setupView;
- (void)updateWithRowModel:(id)arg1;

@end
