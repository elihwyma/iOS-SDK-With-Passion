/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UICollectionReusableView.h>

@class NSString, UIButton, UILabel;

@interface MFPhotoPickerSectionHeaderView : UICollectionReusableView

{
    UILabel *_titleLabel;
    UIButton *_actionButton;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reusableIdentifier;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)addAllPhotosTarget:(id)arg1 action:(SEL)arg2;

@end
