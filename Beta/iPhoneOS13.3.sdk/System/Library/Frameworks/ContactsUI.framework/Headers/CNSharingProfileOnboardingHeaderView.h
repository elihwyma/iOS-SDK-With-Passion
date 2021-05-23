/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UICollectionReusableView.h>

@class OBHeaderView;

__attribute__((visibility("hidden")))
@interface CNSharingProfileOnboardingHeaderView : UICollectionReusableView

{
    OBHeaderView *_headerView;
}

@property (retain, nonatomic) OBHeaderView *headerView;

+ (id)reuseIdentifier;

- (id)initWithTitle:(id)arg1;
- (id)reuseIdentifier;

@end
