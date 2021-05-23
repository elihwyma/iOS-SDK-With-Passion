/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface CNPhotoPickerTrapView : UIView

{
    UILabel *_label;
    NSArray *_constraints;
}

@property (retain, nonatomic) UILabel *label;
@property (retain) NSArray *constraints;

- (id)initWithFrame:(struct CGRect)arg1;

@end
