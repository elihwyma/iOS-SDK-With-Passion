/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIViewController.h>

@class CNMeCardSharingOnboardingAvatarCarouselViewController, CNMeCardSharingPickerLayoutAttributes, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingHeaderViewController : UIViewController

{
    NSString *_headerTitle;
    CNMeCardSharingOnboardingAvatarCarouselViewController *_avatarCarouselController;
    unsigned long long _mode;
    CNMeCardSharingPickerLayoutAttributes *_layoutAttributes;
    UILabel *_headerLabel;
}

@property (retain, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) CNMeCardSharingOnboardingAvatarCarouselViewController *avatarCarouselController;
@property (nonatomic) unsigned long long mode;
@property (retain, nonatomic) CNMeCardSharingPickerLayoutAttributes *layoutAttributes;
@property (retain, nonatomic) UILabel *headerLabel;

+ (double)heightForHeaderWithContainerSize:(struct CGSize)arg1 withTitle:(id)arg2 layoutAttributes:(id)arg3 hasAvatar:(_Bool)arg4;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithAvatarCarouselViewController:(id)arg1 headerTitle:(id)arg2 layoutAttributes:(id)arg3;

@end
