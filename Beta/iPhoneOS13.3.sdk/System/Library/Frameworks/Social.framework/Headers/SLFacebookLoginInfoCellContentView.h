/*
 Image: /System/Library/Frameworks/Social.framework/Social
 */

#import <UIKit/UIView.h>

@class NSString, UIFont, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SLFacebookLoginInfoCellContentView : UIView

{
    UIFont *_font;
    UIImageView *_addressBookIcon;
    UIImageView *_calendarIcon;
    UIImageView *_photosIcon;
    UIImageView *_appStoreIcon;
    UILabel *_addressBookLabel;
    UILabel *_calendarLabel;
    UILabel *_photosLabel;
    UILabel *_appStoreLabel;
    NSString *_addressBookLabelText;
    NSString *_calendarLabelText;
    NSString *_photosLabelText;
    NSString *_appStoreLabelText;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;

@end
