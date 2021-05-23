/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@class CNAvatarView, CNContact, UILabel, UIViewController;

@interface EKUILabeledAvatarView : UIView

{
    _Bool _loadContactsAsynchronously;
    UILabel *_label;
    UIViewController *_viewController;
    CNAvatarView *_avatar;
    unsigned long long _labelPlacement;
    unsigned long long _options;
}

@property (retain) CNAvatarView *avatar;
@property (retain) UILabel *label;
@property unsigned long long labelPlacement;
@property unsigned long long options;
@property (retain) CNContact *contact;
@property (weak) UIViewController *viewController;
@property (nonatomic) _Bool loadContactsAsynchronously;

+ (id)_createAvatarView;
+ (id)contactForAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)contactKeysToFetch;
+ (id)contactForEmailAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)contactForPhoneNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
+ (id)sortedAvatarListFromParticipants:(id)arg1;

- (id)init;
- (void)setup;
- (void)updateWithContacts:(id)arg1;
- (id)initWithPlacement:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)updateWithParticipant:(id)arg1;
- (void)didTap;
- (void)updateLabel;
- (void)updateAvatarViewWithAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;
- (id)initWithIdentity:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithContact:(id)arg1 placement:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)initWithEmail:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 placement:(unsigned long long)arg5 options:(unsigned long long)arg6;
- (void)setUpTap;
- (void)updateWithAddress:(id)arg1 fullName:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;

@end
